@echo off
for /f %%i in ('dir /b /s *.cpp *.py *.java ^| find /c /v ""') do set COUNT=%%i
powershell -Command "(Get-Content README.md) -replace 'Total Problems Solved: .*', 'Total Problems Solved: %COUNT%' | Set-Content README.md"
git add README.md
git commit -m "Updated problem count in README"
git push origin main
 
