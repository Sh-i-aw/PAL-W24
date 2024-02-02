/*
* Write a program that prints out the number from 10 to 1, with a second of delay between each print. 
* When all 10 numbers are done, print 'We are done!"
* 
* BONUS challenge: try printing out only the even or odd numbers. 
*/

#include <stdio.h>
#include <Windows.h>	// this library gives us Sleep(), this is just to make a point that various functionalities can be found in libraries, the use of Sleep() is not encouraged. 

int main(void)
{
	// have a variable holding the starting value 
	int counter = 10;

	// run the loop, as long as counter is not 0
	while (counter > 0)
	{
		printf("%d\n", counter);
		//decrease by 1 each time
		counter = counter - 1;

		Sleep(1000);

		// if counter is even, print 
		//if (counter % 2 == 0)
		//{
		//	// print it out
		//	printf("%d\n", counter);
		//}
	}

	printf("We are done!\n");

	return 0;
}