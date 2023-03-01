0x06. C - More pointers, arrays and strings

0. strcat: a function that concatenates two strings.
	#This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte	
	#Returns a pointer to the resulting string dest
1. strncat: a function that concatenates two strings.
	#The _strncat function is similar to the _strcat function, except that
		~it will use at most n bytes from src; and
		~src does not need to be null-terminated if it contains n or more bytes	
	#Return a pointer to the resulting string dest
2. strncpy: a function that copies a string.
	#It should work exactly like strncpy
3. strcmp: a function that compares two strings.
	#works exactly like strcmp
4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy: a function that reverses the content of an array of integers.
	#n is the number of elements of the array
5. Always look up: a function that changes all lowercase letters of a string to uppercase.
6. Expect the best. Prepare for the worst. Capitalize on what comes: a function that capitalizes all words of a string.
	#Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
7. Mozart composed his music not for the elite, but for everybody: a function that encodes a string into 1337.
	#Letters a and A should be replaced by 4
	#Letters e and E should be replaced by 3
	#Letters o and O should be replaced by 0
	#Letters t and T should be replaced by 7
	#Letters l and L should be replaced by 1
	#can only use one if in your code
	#can only use two loops in your code
	#not allowed to use switch
	#not allowed to use any ternary operation
8. rot13: a function that encodes a string using rot13.
	#can only use if statement once in your code
	#can only use two loops in your code
	#not allowed to use switch
	#not allowed to use any ternary operation
9. Numbers have life; they're not just symbols on paper: a function that prints an integer.
	#can only use _putchar function to print
	#not allowed to use long
	#not allowed to use arrays or pointers
	#not allowed to hard-code special values
10. A dream doesn't become reality through magic; it takes sweat, determination and hard work: Add one line to the existing code so that the program prints a[2] = 98, followed by a new line.
	#not allowed to use the variable a in your new line of code
	#not allowed to modify the variable p
	#only write one statement
	#not allowed to use ,
	#not allowed to code anything else than the line of expected line of code at the expected line
	# code should be written at line 19, before the ;
	#Do not remove anything from the initial code (not even the comments)
	#don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)
	#allowed to use the standard library
11. It is the addition of strangeness to beauty that constitutes the romantic character in art: a function that adds two numbers.
	#Where n1 and n2 are the two numbers
	#r is the buffer that the function will use to store the result
	#size_r is the buffer size
	#The function returns a pointer to the result
	#assume that you will always get positive numbers, or 0
	#assume that there will be only digits in the strings n1 and n2
	#n1 and n2 will never be empty
	#If the result can not be stored in r the function must return 0
12. Noise is a buffer, more effective than cubicles or booth walls: a function that prints a buffer.
	#The function must print the content of size bytes of the buffer pointed by b
	#The output should print 10 bytes per line
	#Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0
	#Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
	#Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .
	#Each line ends with a new line \n
	#If size is 0 or less, the output should be a new line only \n
	#allowed to use the standard library

All prototypes are included in the main.h file
