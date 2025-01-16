# Tic-Tac-Toe Game in C++

## Overview

The **Tic-Tac-Toe Game in C++** is a console-based application that allows two players to engage in a classic game of Tic-Tac-Toe. Built using C++, this program offers a simple yet interactive experience, showcasing fundamental programming concepts such as classes, vectors, and user input handling. The game features a dynamic board display, input validation, win detection, and the ability to switch players seamlessly.

## Prerequisites

Before running the **Tic-Tac-Toe Game in C++**, ensure you have the following installed on your system:

- **C++ Compiler**: GCC, Clang, or any other C++11 compatible compiler.
- **Make** (optional): For using Makefiles to compile the project.

## Installation

### 1. Clone the Repository

Clone the **Tic-Tac-Toe Game in C++** repository from GitHub:

```bash
git clone https://github.com/Aman-Sunesh/Tic-Tac-Toe-Cpp.git
cd Tic-Tac-Toe-Cpp
```

## 2. Compile the Application
You can compile the application using the `g++` compiler. Ensure you have `g++` installed on your system.

### Using g++ Directly:
```bash
g++ -std=c++11 -o TicTacToe TicTacToe.cpp
```

### Using Makefile (Optional):
If a Makefile is provided, you can compile the project by simply running:

```bash
make
```
This will generate an executable named TicTacToe in the project directory.


## 3. Run the Application
After successful compilation, run the application using the following command:

```bash
./TicTacToe
```

On Windows, the executable will be TicTacToe.exe:

```bash
TicTacToe.exe
```

## Usage

### Starting the Game
#### Launch the Application:
Run the executable using the terminal or command prompt as shown above.

#### Gameplay:
- The game will display an empty 3x3 Tic-Tac-Toe board.
- Players take turns to enter their moves by specifying the row and column numbers (0, 1, or 2).
- For example, entering `0 1` will place the current player's symbol in the first row, second column.

#### Winning the Game:
- The game automatically detects when a player has won by completing a row, column, or diagonal.
- If all cells are filled without any player winning, the game declares a tie.

#### Exiting the Game:
- The game will terminate after a win or a tie.
- To exit prematurely, you can close the terminal window or use interrupt commands like `Ctrl+C`.

---

## Features and Functionalities

### Interactive Gameplay:
- **Two-player mode** with alternating turns.
- **Real-time board updates** after each move.

### Input Validation:
- Ensures that players enter valid row and column numbers.
- Prevents overwriting of already occupied cells.

### Win Detection:
- Automatically checks for winning conditions after each move.
- Detects wins across rows, columns, and both diagonals.

### Tie Detection:
- Recognizes when the board is full without any player winning, resulting in a tie.

### User-Friendly Interface:
- Clear and readable console output for the game board.
- Prompts and messages guide the players through the game.

---

## Detailed Features

### 1. Interactive Gameplay
#### Player Turns:
- The game starts with Player 'X' and switches to Player 'O' after each valid move.

#### Board Display:
- The current state of the board is displayed before each move, showing which cells are occupied and which are available.

---

### 2. Input Validation
#### Valid Range:
- Players must enter row and column numbers between 0 and 2.

#### Cell Availability:
- The game checks if the chosen cell is empty before placing the player's symbol.

#### Error Messages:
- Invalid inputs or attempts to occupy already filled cells prompt error messages and request re-entry.

---

### 3. Win and Tie Detection
#### Winning Conditions:
- Three identical symbols in a row, column, or diagonal.

#### Tie Conditions:
- All cells are filled without any player meeting the winning conditions.

#### Endgame Messages:
- Announces the winning player or declares a tie accordingly.

---

### 4. User-Friendly Interface
#### Clear Prompts:
- Instructions and prompts are displayed to guide players on how to enter their moves.

#### Readable Board:
- The game board is formatted for easy visualization of the current state.

---

## Troubleshooting

### 1. Compilation Errors
#### Missing Compiler:
- Ensure that a C++11 compatible compiler like `g++` is installed.

#### Installation on Ubuntu:
```bash
sudo apt update
sudo apt install g++
```

### 2. Runtime Errors

#### Invalid Inputs:
- Enter only integers between 0 and 2 for row and column.

#### Segmentation Faults:
- Ensure that the game logic correctly handles all board states and does not access out-of-bounds indices.

---

### 3. Execution Issues

#### Permission Denied:
- On Unix-based systems, ensure the executable has the necessary permissions:
```bash
chmod +x TicTacToe
```

#### Incorrect Executable Path:
- Make sure you are in the correct directory where the executable is located or provide the full path to run it.

## Contributing
Contributions are welcome! Please fork the repository and submit a pull request with your improvements or additional features. Whether it's enhancing the algorithm, optimizing performance, or adding new functionalities, your contributions are valuable.

## Acknowledgments

- **C++ Documentation:** [https://en.cppreference.com/w/](https://en.cppreference.com/w/)
- **GitHub Community:** For continuous support and resources.
- **Open Source Contributors:** For maintaining and contributing to the tools and libraries used in this project.
