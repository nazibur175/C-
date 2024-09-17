@echo off
g++ -std=c++17 -o test_gen.exe test_gen.cpp
g++ -std=c++17 -o my_soln.exe my_soln.cpp
g++ -std=c++17 -o brute.exe brute.cpp
for /l %%x in (1, 1, 100) do (
    test_gen > input.in
    my_soln < input.in > wrong_output.out 
    brute < input.in > correct_output.out
    fc wrong_output.out correct_output.out > diagnostics || exit /b
    echo %%x
)
echo all tests passed
pause