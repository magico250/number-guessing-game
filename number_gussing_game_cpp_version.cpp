#include <iostream>
#include <random>
using namespace std;

void end_game(int code) {
  if (code == 1) {
    cout << "Invalid choice!" << endl;
  }
}

void start_game(int chances) {

  // ============================================== Random Number
  // ============================================
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dist(1, 100);
  int computer_number = dist(gen);
  // =========================================================================================================

  // ============================================== Start Guessing
  // ===========================================
  int have = chances;
  int user_guess;

  while (chances > 0) {
    cout << "Enter your guess: ";
    cin >> user_guess;
    cout << "\n" << endl;

    if (user_guess > computer_number) {
      cout << "Incorrect! The number is less than " << user_guess << "\n"
           << endl;
    } else if (user_guess < computer_number) {
      cout << "Incorrect! The number is greater than " << user_guess << "\n"
           << endl;
    } else if (user_guess == computer_number) {
      cout << "Congratulations! You guessed the correct number in "
           << have - chances << " attempts.\n"
           << endl;
      end_game(0);
      break;
    }
    chances -= 1;
  }

  if (chances == 0) {
    cout << "Game Over! The correct number was " << computer_number << "."
         << endl;
  }

  // =========================================================================================================
}

int main() {
  // ============================================ Welcome Screen
  // =============================================
  cout << "Welcome to the Number Guessing Game!" << endl;
  cout << "I'm thinking of a number between 1 and 100." << endl;
  cout << "You have 5 chances to guess the correct number." << endl;

  // =========================================================================================================

  // ========================================== Difficulty Level
  // =============================================
  int difficulty_level;
  int chances = -1;

  cout << "\nPlease select the difficulty level:" << endl;
  cout << "1. Easy (10 chances)" << endl;
  cout << "2. Medium (5 chances)" << endl;
  cout << "3. Hard (3 chances)\n" << endl;
  cout << "Enter your choice: ";
  cin >> difficulty_level;
  cout << "\n\n";

  if (difficulty_level == 1) {
    chances = 10;
    cout << "Great! You have select the Easy difficulty level." << endl;
    cout << "Let's start the game!\n" << endl;
    start_game(chances);
  } else if (difficulty_level == 2) {
    chances = 5;
    cout << "Great! You have select the Medium difficulty level." << endl;
    cout << "Let's start the game!\n" << endl;
    start_game(chances);
  } else if (difficulty_level == 3) {
    chances = 3;
    cout << "Great! You have select the Hard difficulty level." << endl;
    cout << "Let's start the game!\n" << endl;
    start_game(chances);
  } else {
    end_game(1);
  }
  // =========================================================================================================
}
