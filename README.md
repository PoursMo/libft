###	**ctype.h**
*	isalnum			-	Checks whether the operand is alphanumeric
*	isalpha			-	Checks whether the operand is alphabetic
*	islower			-	Checks whether the operand is lowercase
*	isupper			-	Checks whether the operand is an uppercase
*	isdigit			-	Checks whether the operand is a digit
*	isspace			-	Checks whether the operand is space
*	isblank			-	Checks whether the operand is a blank space character
*	isprint			-	Checks whether the operand is a printable character
*	isascii			-	Checks whether the operand is a valid 7–bit US-ASCII character
*	tolower			-	Converts the operand to lowercase
*	toupper			-	Converts the operand to uppercase
###	**string.h**
*	strcpy			-	Copies one string to another
*	stpcpy			-	A variant of strcpy returning a pointer to the byte following the last written byte
*	strlcpy			-	A variant of strcpy that truncates the result to fit in the destination buffer
*	strcat			-	Appends one string to another
*	strlcat			-	A variant of strcat that truncates the result to fit in the destination buffer
*	strlen			-	Returns the length of the string
*	strnlen			-	Returns the length of the string up to a maximum
*	strcmp			-	Compares two strings (three-way comparison)
*	strncmp			-	Compares a specific number of bytes in two strings
*	strchr			-	Finds the first occurrence of a byte in a string 
*	strrchr			-	Finds the last occurrence of a byte in a string
*	strstr			-	Finds the first occurrence of a substring in a string
*	memset			-	Fills a buffer with a repeated byte. 
*	memcpy			-	Copies one buffer to another.
*	mempcpy			-	A variant of memcpy returning a pointer to the byte following the last written byte
*	memmove			-	Copies one buffer to another, possibly overlapping, buffer
*	memcmp			-	Compares two buffers (three-way comparison)
*	memchr			-	Finds the first occurrence of a byte in a buffer 
*	bzero			-	Fills a buffer with zero bytes 
*	strdup			-	Allocates and duplicates a string\
:warning: Returns a malloc-ed string
*	strndup			-	Allocates and duplicates n bytes of a string\
:warning: Returns a malloc-ed string
###	**stdlib.h**
*	atoi			-	Converts a string to an integer
*	calloc			-	Allocates the specified number of bytes and initializes them to zero\
:warning: Returns a malloc-ed element
###	**linked list**
*	lstnew			-	Create a new list node element 
*	lstadd_front	-	Adds a new element at the front of the list
*	lstsize			-	Returns the number of elements in the list 
*	lstlast			-	Returns the last element of the list 
*	lstadd_back		-	Adds a new element at the back of the list 
*	lstdelone		-	Removes one element from the list 
*	lstclear		-	Removes the element passed as parameter and all the following elements
*	lstiter			-	Applies a function to each element's content
*	lstmap			-	Creates a new list resulting from the application of f to each element
###	**other**
*	putstr			-	Writes a string to the standard input
*	putchar			-	Writes a character to the standard input
*	putnbr			-	Writes a 32-bit integer to the standard input
*	strjoin			-	Creates a string that consists of str1 concatenated with str2\
:warning: Returns a malloc-ed string
*	split			-	Splits a string into an array of substrings\
:warning: Returns a malloc-ed array of malloc-ed strings
*	conv_to_base	-	Converts an integer to a specified base\
:warning: Returns a malloc-ed string
*	putnbr_base		-	Writes a 64-bit integer converted to a specified base to the standard input
*	itoa			-	Converts an integer to a string
*	strrev			-	Reverses a string
