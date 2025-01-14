Description:
This C program takes a string input from the user and checks whether the input represents a C-style comment. It differentiates between single-line and multi-line comments, using a combination of string operations to determine the type of comment based on its starting and ending characters.

Key Features:
Input Handling:

The program prompts the user to enter a comment and stores the input in the com array using the gets() function.
Note: gets() is unsafe and should be replaced by fgets() for safer input handling, preventing buffer overflow issues.
Comment Detection Logic:

Single-line Comment: The program checks if the first two characters of the input string are //, indicating a single-line comment in C.
Multi-line Comment: The program checks if the input starts with /* and ends with */, which is a valid multi-line comment in C.
If neither of these conditions is met, the program concludes that the input is not a comment.
Output:

If the input is a single-line comment (starts with //), it outputs:
"It is a single line Comment."
If the input is a multi-line comment (starts with /* and ends with */), it outputs:
"It is a multiple line Comment."
If the input is neither, the program outputs:
"It is not a Comment."# recognize-comment
