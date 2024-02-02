// Given the integer values below, utilize the standard I/O library, and print them out as char variables.
// 87, 101, 108, 99, 111, 109, 101, 32
// 116, 111, 32 
// 80, 65, 76, 33


#include <stdio.h> // library for standard input and output 

int main(void)
{
	printf("%c%c%c%c%c%c%c%c", 87, 101, 108, 99, 111, 109, 101, 32);
	printf("%c%c%c", 116, 111, 32);
	printf("%c%c%c%c", 80, 65, 76, 33);


	return 0;	// our main() function returns an integer value, 0 conventionally means nothing had gone wrong. 
}
