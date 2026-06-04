@echo off
chcp 65001 >nul

set "SRC=%~1"
set "OUT=%~2"

"C:\msys64\ucrt64\bin\g++.exe" -fdiagnostics-color=always -g -O0 "%SRC%" -o "%OUT%"
if errorlevel 1 exit /b %errorlevel%

"%OUT%"
