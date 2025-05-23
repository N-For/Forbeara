@echo off
chcp 1251
SetLocal EnableExtensions EnableDelayedExpansion
cls
cd..
set x=main
cd output
xcopy %x%.cpp "MinGW64/bin" /Y
cd MinGW64
cd bin
cls
g++ -o %x%.exe %x%.cpp -std=gnu++11 -lurlmon
cls
xcopy "%x%.exe" "exe" /Y
cd..
cd..
xcopy "MinGW64/bin/exe" "cd" /Y
cls
exit
