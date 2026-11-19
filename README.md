# C++ Odd or Even Checker

A simple C++17 program that asks for integers and reports whether each number is odd or even. It handles negative numbers and zero, rejects non-integer input, and keeps running until you enter `q`.

## Compile

```bash
g++ -std=c++17 -Wall -Wextra main.cpp -o oddeven
```

## Run

```bash
./oddeven
```

On Windows, run `oddeven.exe` instead.

## Sample output

The example below shows the results for `7`, `10`, `0`, `-3`, and `-8`. It also shows an invalid entry (`abc`), followed by a valid retry (`4`) and `q` to quit.

```text
Enter an integer (or q to quit): 7
7 is Odd.
Enter an integer (or q to quit): 10
10 is Even.
Enter an integer (or q to quit): 0
0 is Even.
Enter an integer (or q to quit): -3
-3 is Odd.
Enter an integer (or q to quit): -8
-8 is Even.
Enter an integer (or q to quit): abc
Error: please enter a whole integer.
Enter an integer (or q to quit): 4
4 is Even.
Enter an integer (or q to quit): q
Goodbye!
```
