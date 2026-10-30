"""
YourAssistantCoder (yac) - web_search.py
Web search for the agent via DuckDuckGo (no API key needed).
"""

import urllib.request
import urllib.parse
import json
import re


def search(query: str, max_results: int = 5) -> str:
    """
    Search the web via DuckDuckGo Instant Answer API.
    Returns a formatted markdown string of results.
    """
    try:
        # DuckDuckGo instant answers (no key needed)
        params  = urllib.parse.urlencode({"q": query, "format": "json", "no_html": "1", "skip_disambig": "1"})
        url     = f"https://api.duckduckgo.com/?{params}"
        req     = urllib.request.Request(url, headers={"User-Agent": "YourAssistantCoder/1.0"})

        with urllib.request.urlopen(req, timeout=10) as resp:
            data = json.loads(resp.read().decode())

        results = []

        # Abstract (best single answer)
        if data.get("AbstractText"):
            results.append(f"**Summary:** {data['AbstractText']}")
            if data.get("AbstractURL"):
                results.append(f"Source: {data['AbstractURL']}")
            results.append("")

        # Related topics
        topics = data.get("RelatedTopics", [])[:max_results]
        if topics:
            results.append("**Related:**")
            for t in topics:
                if isinstance(t, dict) and t.get("Text"):
                    text = t["Text"][:200]
                    url  = t.get("FirstURL", "")
                    results.append(f"- {text}" + (f" ({url})" if url else ""))

        if not results:
            # Fallback: HTML scrape snippet
            return _ddg_html_search(query, max_results)

        return "\n".join(results)

    except Exception as e:
        # Fallback on any error
        try:
            return _ddg_html_search(query, max_results)
        except Exception:
            return f"Search failed: {e}"


def _ddg_html_search(query: str, max_results: int = 5) -> str:
    """Fallback: scrape DuckDuckGo HTML results."""
    try:
        params  = urllib.parse.urlencode({"q": query})
        url     = f"https://html.duckduckgo.com/html/?{params}"
        req     = urllib.request.Request(url, headers={
            "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36"
        })
        with urllib.request.urlopen(req, timeout=10) as resp:
            html = resp.read().decode("utf-8", errors="replace")

        # Extract result snippets
        snippets = re.findall(r'class="result__snippet"[^>]*>(.*?)</a>', html, re.DOTALL)
        titles   = re.findall(r'class="result__a"[^>]*>(.*?)</a>', html, re.DOTALL)
        urls     = re.findall(r'class="result__url"[^>]*>(.*?)</a>', html, re.DOTALL)

        def clean(s): return re.sub(r'<[^>]+>', '', s).strip()

        results = [f"**Search results for:** {query}\n"]
        for i in range(min(max_results, len(snippets))):
            title   = clean(titles[i])   if i < len(titles)   else ""
            snippet = clean(snippets[i]) if i < len(snippets) else ""
            url     = clean(urls[i])     if i < len(urls)     else ""
            if title or snippet:
                results.append(f"**{title}**" if title else "")
                if snippet: results.append(snippet)
                if url:     results.append(f"*{url}*")
                results.append("")

        return "\n".join(results) if len(results) > 1 else f"No results found for: {query}"

    except Exception as e:
        return f"Search unavailable: {e}"