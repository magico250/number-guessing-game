# Number Guessing Game

A simple CLI-based number guessing game built in Python. The computer picks a random number between 1 and 100, and the player has to guess it within a limited number of attempts based on the difficulty level they choose.

Built as part of the [roadmap.sh Python Projects](https://roadmap.sh/projects/number-guessing-game) track.

## How to Play

1. Run the game.
2. Choose a difficulty level:
   - **Easy**: 10 chances
   - **Medium**: 5 chances
   - **Hard**: 3 chances
3. Enter your guess when prompted.
4. The game tells you if the number is greater or smaller than your guess.
5. Keep guessing until you find the number or run out of chances.

## How to Run

Make sure you have Python installed, then run:

```bash
python number_guessing_game.py
```

## Features

- Random number generation using Python's `random` module
- Difficulty levels that control the number of chances
- Input validation (handles invalid/non-numeric input gracefully)
- Tracks and displays the number of attempts taken to win

## Example Output

```
Welcome to the Number Guessing Game!
I'm thinking of a number between 1 and 100.
You have 5 chances to guess the correct number.

Please select the difficulty level:
1. Easy (10 chances)
2. Medium (5 chances)
3. Hard (3 chances)

Enter your choice: 2

Great! You have select the Medium difficulty level.
Let's start the game!

Enter your guess: 50
Incorrect! The number is less than 50

Enter your guess: 25
Incorrect! The number is greater than 25

Enter your guess: 35
Incorrect! The number is less than 35

Enter your guess: 30
Congratulations! You guessed the correct number in 4 attempts.
```

## Author

Abdallah Magico
