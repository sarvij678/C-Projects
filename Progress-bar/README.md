# Progress Bar in C

A simple terminal-based progress bar simulation written in C. This project simulates multiple tasks running at the same time, with each task gradually progressing until it reaches 100%.

## Features

* Simulates 5 independent tasks
* Displays a progress bar for each task
* Updates task progress using random increments
* Uses structures (`struct`) to store task information
* Uses functions to organize the code
* Uses `Sleep()` to create an animated progress effect
* Clears the terminal screen between updates for smooth animation

## Technologies Used

* C Programming Language
* GCC Compiler
* Windows API (`windows.h`)

## Concepts Practiced

* Structures (`typedef struct`)
* Arrays
* Functions
* Function Prototypes
* `for` Loops
* `while` Loops
* Conditional Statements (`if` / `else`)
* Random Number Generation (`rand()`, `srand()`)
* Time Library (`time.h`)
* Screen Clearing using `system("cls")`
* Delays using `Sleep()`

## Project Structure

```text
Progress-bar/
│── progress.c
│── README.md
└── .gitignore
```

## How It Works

1. Creates an array of 5 tasks.
2. Assigns each task:

   * A unique ID
   * Initial progress of 0%
   * A random step value between 1 and 5
3. Updates each task's progress every second.
4. Prints a progress bar for every task.
5. Stops when all tasks reach 100%.

## How to Compile

Using GCC:

```bash
gcc progress.c -o progress
```

## How to Run

On Windows PowerShell:

```powershell
.\progress
```

Or in Command Prompt:

```cmd
progress.exe
```

## Example Output

```text
Task 1: [=========================                         ] 50%
Task 2: [=====================================             ] 74%
Task 3: [====================                              ] 40%
Task 4: [==========================================        ] 84%
Task 5: [==============================================    ] 92%
```

(The values change every time because each task gets a random progress increment.)

## What I Learned

While building this project, I learned how to:

* Create and use structures in C
* Store multiple structures in an array
* Pass a structure to a function
* Use loops to update data repeatedly
* Generate random numbers using `rand()`
* Animate output in the terminal using `Sleep()`
* Display a dynamic progress bar
* Organize code into separate functions
* Improve program readability using function prototypes

## Author

GitHub: sarvij678
Profile: https://github.com/sarvij678