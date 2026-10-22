# Sudoku Solver in C

A console-based **Sudoku Solver** written in **C** that solves a 9×9 Sudoku puzzle using the **Backtracking Algorithm**. The program checks whether each move follows Sudoku rules and recursively searches for a valid solution.

## Features

* Solves a 9×9 Sudoku puzzle.
* Uses the Backtracking Algorithm.
* Validates every move before placing a number.
* Displays the original puzzle.
* Displays the solved puzzle.
* Detects when a puzzle has no valid solution.
* Simple console-based interface.

## Technologies Used

* C Programming Language
* GCC Compiler
* Visual Studio Code

## How It Works

The program follows these steps:

1. Start from the first cell of the puzzle.
2. Skip cells that already contain numbers.
3. Find the next empty cell.
4. Try placing numbers from **1 to 9**.
5. Check whether the number is valid by verifying:

   * The current row
   * The current column
   * The corresponding 3×3 subgrid
6. If the move is valid, place the number and recursively solve the remaining puzzle.
7. If no number works, remove the previously placed number (backtracking) and try another value.
8. Continue until the puzzle is solved or no solution exists.

## Project Structure

```text
Sudoku-Solver/
│── sudoku.c
│── README.md
│── .gitignore
```

## How to Compile

Compile the program using GCC:

```bash
gcc sudoku.c -o sudoku
```

## How to Run

### Windows

```bash
sudoku.exe
```

### Linux / macOS

```bash
./sudoku
```

## Sample Output

```text
Welcome to SUDOKU SOLVER !!!

Original Puzzle:

+-------+-------+-------+
| 3     |   2   |   7   |
| 9     | 5     |   1 4 |
|   1 6 | 3 7   |     8 |
|-------+-------+-------|
| 2     | 8     |     1 |
| 5     |   4 1 | 8     |
|   8 9 |       |   5   |
|-------+-------+-------|
|     5 |   1   | 2 8   |
|   4   |     6 |   9 3 |
| 7 3 1 |   8 2 |       |
+-------+-------+-------+

The puzzle is solved:
...
```

## Future Improvements

* Allow users to enter their own Sudoku puzzle.
* Read puzzles from a file.
* Validate puzzles before solving.
* Generate random Sudoku puzzles.
* Measure solving time.
* Create a graphical user interface (GUI).

## Author

**Zombie**

GitHub: https://github.com/sarvij678

---

If you found this project useful, consider giving the repository a ⭐ on GitHub.
