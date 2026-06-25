@echo off
setlocal enabledelayedexpansion

set CORES=4
set COUNT=0

for %%F in (*.c "nuitka\helper\*.c") do (    
    start /b gcc -c "%%F" -o "%%~nF.o" -w -O2 -I. -IE:\Python3.13\include
    
    set /a COUNT+=1
    if !COUNT! geq %CORES% (
        timeout /t 1 /nobreak >nul
        set COUNT=0
    )
)
echo Waiting for final files to finish compiling...
timeout /t 5 /nobreak >nul
