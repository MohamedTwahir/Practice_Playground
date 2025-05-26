# This program demonstrates the use of logical operator by building a loan eligibility checker
# The parameters to be measured to consider loan eligibility include income and good credit
print("Jambo and Habari Ya Leo Karibu Loan mashariki the best loan providers in the game")
print("You only got to answer few questions to determine your eligibility for the loan")
# Determine the level of income
income = int(input("Please enter your monthly income: "))

# Initialize income flags
high_income = False
medium_income = False

# check if income is high, low or medium
# high income is  any income above $2000 monthly which makes him/her highly eligible with a limit of $10000
# medium income is any income above $1000 and below $2000 making him/her partially eligible with a limit of $5000
# low income is any income below $1000 strongly ineligible
if income  >= 2000:
    high_income = True
elif income >= 1000:
    medium_income = True
else:
    print("Sorry you are ineligible. Check out our other loan services.")
    exit()

# Check the credit score of the applicant
# high credit score is considered to be around 600 making him eligible for the $10000 if the applicant also has high income
# medium credit score is considered to be around 400 to 599 making the applicant eligible.
credit_score = int(input("Kindly input your credit score for this step: "))

# Initialize credit flags
good_credit = False
medium_credit = False

if credit_score >= 600:
    good_credit = True
elif credit_score >= 400:
    medium_credit = True
# Determine his eligibility and loan amount for each customer
amount1 = 10000 # if high income and good credit
amount2 = 5000 # if high income and medium credit or if medium income and good credit
amount3 = 2500 # if medium income and medium credit

if high_income and good_credit:
    message = f"Congratulations you are eligible for our loan service with loan amount ${amount1}"
elif (high_income and medium_credit) or (medium_income and good_credit):
    message = f"Congratulations you are eligible for our loan service with loan amount ${amount2}"
elif medium_income and medium_credit:
    message = f"Congratulations you are eligible for our loan service with loan amount ${amount3}"
else:
    message = "Sorry, you are not eligible for our loan services."

print(message)
