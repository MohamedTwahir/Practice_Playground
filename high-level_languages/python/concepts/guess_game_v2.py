# A python script to demonstrate match case concept through a guessing game.
# I had created a similar game using a while loop that why i call this one v2.
import random

print("Welcome to guessing Number Game!")

while True:
    secret_number = random.randint(1, 10)

# Get user's guess
    guess = int(input("I'm thinking of a number between 1 and 10. Can you guess it? "))

# Match the guess
    match guess:
        case _ if guess == secret_number:
                print("Congratulations you guessed it!")
        case _ if guess > secret_number:
                print("Oops. your guess is a bit high. Try again!")
        case _ if guess < secret_number:
                print("Nope, your guess is a bit low. Give it another shot!")
    play_again = input("Do you want to play again? (yes/no): ").strip().lower()
    if play_again not in ("yes", "y"):
                print("thanks for playing, Goodbye!")
                print("Play again? ")