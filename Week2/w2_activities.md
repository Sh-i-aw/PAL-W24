#	[Coding practice - “Welcome to PAL!”] (https://github.com/Sh-i-aw/PAL-W24/blob/main/Week2/w2_1_printf_code.cpp)
We reviewed important parts of the C program 
-	Main()
-	return value
-	external library with #include

*source code files are just text files!* 
Any text editor would work! 
We used Notepad as an editor to write code, then changed extension, added the source file to Visual Studio project. 
- ran the code and printed “Welcome to PAL!”
- note the different format codes used in printf() 
- %d %i %u %c %f 
- Different padding options, e.g. %4c or %4.2f
  * observe, does printf() round floating point values when decimal is specified? 

#	Intuition Quiz
- We exercise a quiz based on our intuition and nothing else
- These true or false questions are below: 
  - The compiler does not execute code - (T)
  - The size of an integer depends on the platform - (for C, T)
  - global variables allow flexibility, thus should be used frequently - (F)
  - whitespace increase the file size, thus should be avoided - (F)
  - the phrase “Hello” can be contained in char greet[5] - (F)

#	[Coding exercise - Write a program that counts down from 10 to 1] (https://github.com/Sh-i-aw/PAL-W24/blob/main/Week2/w2_2_countDown.cpp)
The program printed 10 to 1, then “we are done!” to the console.
- We used
  - an integer variable to store the printed number
  - a while loop to execute each iteration 
  - practice assignment operator to achieve decreasing the count down variable by 1
  - quickly viewed the modulo operator and how to use it in an if-else statement
