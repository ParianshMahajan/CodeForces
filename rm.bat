@echo off
rem Deletes all .exe files in the current folder where the batch file is run

echo Deleting all .exe files in the current folder...
del /s /q *.exe
echo Done deleting .exe files.


for /f "tokens=1-3 delims=-/. " %%a in ('echo %date%') do (
    set today=%%a-%%b-%%c
)

rem Git add, commit, and push
git add .
git commit -m "%today%"
git push

echo Git operations completed with commit message: %today%
