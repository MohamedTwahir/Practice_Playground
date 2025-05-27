The concept of match case was introduced after python version 3.10.
In essence this concept aims to promote writing more cleaner python code that can be easily maintained.
A correct usage is as a replacement of if/else statements that can sometimes hide logic in the conditions themselves make them hard to read and maintain incases of a large and complex case.
## Basic Syntax for match case:
match expression:
    * case pattern1:
        * code_block_1
    * case pattern2:
        * code_block_2
    * ...
    * case pattern_n:
        * code_block_n
    * # Optional: _ (wildcard) for default case

* expression: This is the value you want to match against different patterns.
* case pattern: Each case statement defines a pattern to match against the expression.
* code_block: The code block associated with a matching pattern is indented and executed.
* _ (wildcard): An optional _(underscore) can be used as a wildcard pattern to match anything not explicitly covered by other cases. This serves as a default case. ### Matching Specific Values:*    