# printf-recoding-printf()-

During the project ft_printf I recoded a simple version of the popular C function printf(), which
displays text, and variables embedded in text on the standard-output/terminal.

During the project I learned how to use variadic functions, which are functions that can take a variable
amount of arguments of variyng data types. And I learned how to manage multiple static libraries in a single project.

The mandatory part of ft_printf involved handling the conversions:

-c   which displays a single character

-s   which displays a string

-i,d which display integer variables in decimal format

-u   which displays unsigned integer variables in decimal format

-x,X which display unsigned integer variables in hexadecimal format, in upper- or lower-case

-p   which displays a pointer in hexadecimal format

-%   which displays a single percent-sign

Like the original printf() ft_printf() returns the amount of characters it displayed.
