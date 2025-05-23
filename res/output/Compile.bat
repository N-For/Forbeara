@echo off
chcp 1251
SetLocal EnableExtensions EnableDelayedExpansion
xcopy main.cpp "MinGW64/bin" /Y
cd MinGW64
cd bin
g++ -o main.exe main.cpp 
xcopy "main.exe" "exe" /Y
cd..
cd..
xcopy "MinGW64/bin/exe" "cd" /Y  
exit