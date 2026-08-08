import random

print("Welcome to the Number Guessing Game!")
print("I'm thinking of a number between 1 and 100.")
print("You have 5 chances to guess the correct number.")

print("\nPlease select the difficulty level:")
print("1. Easy (10 chances)")
print("2. Medium (5 chances)")
print("3. Hard (3 chances)\n")

try:
    chances = -1
    difficulty_level = int(input("Enter your choice: "))

    print("\n")
    if difficulty_level == 1:
        chances = 10
        print("Great! You have select the Easy difficulty level.")
        print("Let's start the game!\n")
    elif difficulty_level == 2:
        chances = 5
        print("Great! You have select the Medium difficulty level.")
        print("Let's start the game!\n")
    elif difficulty_level == 3:
        chances = 3
        print("Great! You have select the Hard difficulty level.")
        print("Let's start the game!\n")
    else:
        print("Invalid choice!")
        exit()

except ValueError:
    print("\nInvalid input!")
    exit()

computer_guess = random.randint(1, 100)
have = chances

while chances > 0:
    try:
        user_guess = int(input("Enter your guess: "))
        if user_guess > computer_guess:
            print(f"Incorrect! The number is less than {user_guess}\n")
        elif user_guess < computer_guess:
            print(f"Incorrect! The number is greater than {user_guess}\n")
        elif user_guess == computer_guess:
            print(
                f"Congratulations! You guessed the correct number in {have - chances} attempts.\n"
            )
            break

        chances -= 1

    except ValueError:
        print("Invalid Input!")
        continue


if chances == 0:
    print(f"Game Over! The correct number was {computer_guess}.")
