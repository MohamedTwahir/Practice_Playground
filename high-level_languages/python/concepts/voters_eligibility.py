# This python program checks if you are eligible to vote based on you age.
# It aims and showing practical demonstration of how conditional if and else works

# Take user input
age = int(input("Please enter your age: "))

# Compare age with the legal age required to vote
if age >= 18:
    print("Yay! you are eligible to vote. Congratulations!")
# Print out a message when not eligible
else:
    print("Am sorry you are not eligible to vote yet.")