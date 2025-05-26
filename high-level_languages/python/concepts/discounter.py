# A program to calculate discount based on amount spent on purchase.
# minimum amount to be considered for discount is $500 which has 5% or 0.05 and 1000 which has 10% or 0.1 discount

# prompt the user for the purchase amount
purchase_amount = float(input("Enter the amount spent for your purchase: "))

# Check for purchase amount and calculate each discount and print out the discounted price
# discounted_price = purchase_amount - discount
if purchase_amount >= 1000:
    discount = purchase_amount * 0.1
    discounted_price = purchase_amount - discount
    print(f"Thank you for your purchase your amount to pay is ${discounted_price} and the discount receievd is ${discount}")
    print("Hope to see you again at our store")
elif purchase_amount >= 500:
    discount = purchase_amount * 0.05
    discounted_price = purchase_amount - discount
    print(f"Thank you for your purchase your amount to pay is ${discounted_price} and the discount receievd is ${discount}")
    print("Hope to see you again at our store")
else:
    print("Am sorry! spend more to save more")
    print("Hope to see you again at our store")