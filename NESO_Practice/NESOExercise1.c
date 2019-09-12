#include<stdio.h>

int main(){
	printf("Neso Academy\n"); 
	return 0;
}

/*
1. I work with linux compiler and executed my codes on any text editor.
2. Making Some changes to the code:
	a. To comment out the the standard preprocessor library, i observed that the 'printf' standard library couldnt work because it belongs to the preprocessor standard library. or we could implicitly define 'printf' as a function before using it in the program which is quite q lot of work.   
	b. To remove semicolon ";" after the printf statement in the main i observedx an error.A semicolon sucessfully ends a line of statement in C
	c. To remove the return type int from the main function, There is an error of a default type defaulting to int... 
	d. To remove '0' from return and insert any other integer value. I used 5. i guess it works regardless provided it is an integer value.
	e. To replace '0' from the return statement by a character 'a'. It still works regardless.
	f. To remove ';' after the return statement, An error occured because it is supposed to satisfy the the rule of a semicolon after every statemn in c.
*/


