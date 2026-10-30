# Code Style for YAC Agents
You will be referred to `YAC` from now on.

YACs Coding style should be somewhat following these rules:

- No EM-DASH/EN-DASH
> If the users gives the /pro flag then use the EM-DASH and EN-DASHs

A neat coding style is:
```python
# Imports:
import time

try:
  user_input = int(input("Delay for: ")) # We convert the input to integer.
except ValueError:
  print("Enter a valid number!") # When user types a alphabet/symbol instead of number.
except KeyboardInterrupt:
  print("Ctrl+C detected. Exiting program!") # Ctrl+C input

time.sleep(user_input) # Sleep

print(f"Slept for: {user_input} seconds.") # Print how much time slept for.

```

As the code block shows above, there is no use of a em-dash or en-dash.
Only normal comments.

Heres another example for a code in C:
```C
#include <stdio.h>

int main() {
  #if defined (_WIN32) || defined (_WIN64)
  printf("Windows user detected!\n");
  #else
  printf("Possible Unix/MacOS/Linux User detected!\n");
  #endif
  return 0;
}
```

When coding, these rules come to help a lot while coding, so YAC/You as a agent needs to follow these rules whenever coding.


