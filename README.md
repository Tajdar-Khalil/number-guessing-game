# Number Guessing Game in C++

A simple and interactive command-line Number Guessing Game built in C++. This project was designed to practice foundational programming logic, control flow, and random number generation.

## 🚀 Features

- Random number generation between 1 and 100.
- Real-time feedback ("Too high!" or "Too low!") to guide the user's guesses.
- Attempt counter to track how many tries it takes to win.
- Input validation to handle user guesses.

## 🛠️ Concepts Practiced

- **Control Flow:** `if`, `else if`, and `else` statements for conditional logic.
- **Loops:** `while` loops for continuous game execution until the win condition is met.
- **Randomization:** Uses `<cstdlib>` and `<ctime>` libraries to generate a new random number each time the game runs.
- **Input/Output:** Standard `cin` and `cout` for user interaction.

## 💻 How to Run

1. Make sure you have a C++ compiler installed (like MinGW).
2. Clone this repository or download the `number_guessing_game.cpp` file.
3. Open the file in an editor like Visual Studio Code.
4. Compile and run the code using your C++ compiler.

## 📝 Example Gameplay

```text
Welcome to the Guessing Game!
Please enter your guess: 50
Too high!
Please enter your guess: 25
Congratulations! You won in 2 attempts.
