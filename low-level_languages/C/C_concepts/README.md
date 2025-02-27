
Types of Operators 
Description
Arithmetic_operators	These are used to perform mathematical calculations like addition, subtraction, multiplication, division and modulus
Assignment_operators	These are used to assign the values for the variables in C programs.
Relational operators    These operators are used to compare the value of two variables.
Logical operators       These operators are used to perform logical operations on the given two variables.
Bit wise operators      These operators are used to perform bit operations on given two variables.
Conditional (ternary) operators     Conditional operators return one value if condition is true and returns another value is condition is false.
Increment/decrement operators       These operators are used to either increase or decrease the value of the variable by one.
Special operators                   &, *, sizeof( ) and ternary operators.

 # Keywords and identifiers
 identifiers fancy word for "name".
 "The rules for  construction of identifiers :  
 * 52 upper and lower case alphabetic characters, 
 * the 10 digits  
 * the underscore ‘_’ 
 * identifiers must start with an alphabetic character.
Declaration and definition (reference from the C book "https://publications.gbdirect.co.uk//c_book/chapter2/variable_declaration.html")
 /*
* A function is only defined if its body is given
* so this is a declaration but not a definition
*/

int func_dec(void);

/*
* Because this function has a body, it is also
* a definition.
* Any variables declared inside will be definitions,
* unless the keyword 'extern' is used.
* Don't use 'extern' until you understand it!
*/

int def_func(void){
     float f_var;            /* a definition */
     int counter;            /* another definition */
     int rand_num(void);     /* declare (but not define) another function */

     return(0);
}


WHILE LOOP
while loop often called the entry verified loop.
do while loop called the exit verified loop.
For loop is called an automatic loop
Syntax:
while(expression)
{
    statement;
}

To Check if number is even;
(x % 2 == 0)

To Check if number is odd;
(x % 2 != 0)