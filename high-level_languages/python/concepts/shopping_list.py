# A script to search through a list and return it to user
name_list = ["ado", "anwar", "bread", "milk"]
item_found = False # initiating the search

while not item_found:
    item = input("Enter the name of the item to search through the database or 'q' to quit: ")
    
    # Ensuring the quit feature exists
    if item.lower() == "q":
        break
    if item in name_list:
        item_found = True
        print(f"{item} exists in the database.")
    else:
        print(f"{item} is not in your database but worryless i will continue to add it.")
        name_list.append(item)
        print(name_list)