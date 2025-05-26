# this program assigns grades based on student scores.
# the grade layout is as follows A >= 90; B >= 80; C >= 70; F < 70

# Prompt the user for the grade
score = int(input("Enter the student score for the math test: "))
# Check the grade and assign the grade based on the outlined grade scheme
if score >= 90:
    grade = "A"
elif score >= 80:
    grade = "B"
elif score >= 70:
    grade = "C"
else:
    grade = "F"
# use a single print statement to reduce redundancy.
print("Your grade is:", grade)
