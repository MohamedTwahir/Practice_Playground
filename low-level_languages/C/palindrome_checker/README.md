Before we dive into the project first i would like to establish an understanding of what is a palindrome.
A google deifinition states that  palindrome is a word,phrase or numbers that read same backward as forward.
For example;
- 121
- 12321
- racecar
- madam
Types of palindromes;
- Numeric palindrome; A number that remains the same when its digits are reversed.
- String palindrome; A string reading same backward as forward.
- Phrase palindrome; A phrase that reads the same backward as forward, ignoring spaces, punctuation, and capitalization.
- Word palindrome; A word that reads the same backward as forward.
- Sentence palindrome; A sentence that reads the same backward as forward, ignoring spaces, punctuation, and capitalization.
- Date palindrome; A date that reads the same backward as forward, ignoring spaces and punctuation.
- Time palindrome; A time that reads the same backward as forward, ignoring spaces and punctuation.
- Binary palindrome; A binary number that reads the same backward as forward.
- Hexadecimal palindrome; A hexadecimal number that reads the same backward as forward.
How to achieve this project's objective;
Below is a simple flowchart that outlines the steps to check if a string, number, or phrase is a palindrome. The flowchart provides a clear visual representation of the process, making it easier to understand the logic behind the palindrome checker.

```plaintext
[Start]
   ↓
[Input: Get string, number, or phrase from user]
   ↓
[Clean out the  input]
   → Remove spaces
   → Remove non-alphanumeric characters
   → Convert to lowercase
   ↓
[Reverse the cleaned input]
   ↓
[Compare original cleaned input with reversed version]
   ↓
[Is it the same?]
   ┌───────────────┬───────────────┐
   │               │               │
[Yes]         ←───┘         ┌─────→ [No]
   ↓                             ↓
[Output: "It's a palindrome"]   [Output: "Not a palindrome"]
   ↓                             ↓
           [End]
```
```plaintext
