# Built-in data types in Python include;
# 1. Numeric Types
#    - int (integer)
#    - float (floating point number)        
#    - complex (complex numbers)
# 2. Sequence Types
#    - str (string)
#    - list (list)
#    - tuple (tuple)
# 3. Mapping Type
#    - dict (dictionary)
# 4. Set Types
#    - set (set)
#    - frozenset (immutable set)
# 5. Boolean Type
#    - bool (True or False)
# 6. Binary Types
#    - bytes (immutable sequence of bytes)
#    - bytearray (mutable sequence of bytes)
#    - memoryview (memory view object)



# Numeric Types
a =  25
print("This number {} is a type of {}".format(a, type(a)))

b = 27.85
print("This number {} is a type of {}".format(b, type(b)))

c = 25 + 5j
print("This number {} is a type of {}".format(c, type(c)))


# string data type in python
# String can be created using either single , double or triple quotes.
d = 'Welcome to Python'
print(d)

print("{} is a string verified by {}".format(d, type(d)))
# string can be accessed using index
print (d[0])
print (d[1])
print (d[2])

e = "Welcomed to My World"
for i in range(len(e)):
    print(e[i], end = " ")
print("\n")

# strings in python are immutable, once created cannot be changed.
# string slicing
# slicing is used to get a substring from a string
s = "UbuntuforUS"

# Retrieves characters from index 1 to 3: 'eek'
print(s[1:4])  

# Retrieves characters from beginning to index 2: 'Gee'
print(s[:3])   

# Retrieves characters from index 3 to the end: 'ksforGeeks'
print(s[3:])   

# Reverse a string
print(s[::-1])


# del is a function used to delete a string.
# del s
# print(s) # this will throw an error because s has been deleted.

# formating strings
# using f-string
name = "John"
age = 25
print(f"Hello, my name is {name} and I am {age} years old.")
# using format() method
print("Hello, my name is {} and I am {} years old.".format(name, age))  
# Lists are basically arrays " ordered collection of data"

# creating a list
fruits = ["apple", "banana", "cherry"]
print(fruits)
