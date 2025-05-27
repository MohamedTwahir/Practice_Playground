# A python script that aims to demonstrate the concept of match case and usage in a program.
# We use to the days of the week for this demonstration
day = input("Please enter a day of the week (Monday-Sunday): ").lower()

match day: # match expression
    case "monday":
        print("Ugh, Mondays...")
    case "tuesday":
        print("Just another Workday...")
    case "wednesday":
        print("Hump day!")
    case "thursday":
        print("Almost there...")
    case "friday":
        print("TGIF")
    case "saturday" | "sunday":
        print("Weekend Vibes!")
    case _: # used like an else statement
        print("Invalid day entered.")