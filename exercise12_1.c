#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Defining Macros
#define N 30
#define LOWERBOUND 100
#define UPPERBOUND 150

//Defining a function
void init(int *t, int s){
	srand(0);
	int i;
        int j;
	for(i=LOWERBOUND; i<=UPPERBOUND; i++)
		s=i;
	for(j=0; j<=s; j++)
		t[j]=rand();
}

int search(int x, int *t, int s){}
