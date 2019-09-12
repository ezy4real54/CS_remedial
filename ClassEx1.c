#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Assigning elements to an array by concepts of assignments and transversal.
/*int main() {
	float t1[4] = { 4.7, 8.2, 12., -3.9 };
	float t2[4];
	int i;

	// elements of t1 copied to t2
	for (i = 0; i<4; i++)
		t2[i] = t1[i];

	// then print the content of t2
	for (i = 0; i<4; i++)
		printf("t2[%d] = %f\n", i, t2[i]);
	
	return 0;
}*/

//Arguments as arrays 
/*void fill(int size, double t[]) {
	int i;
	for (i = 0; i<size; i++) {
		printf("Give t[%d] : ", i);
		scanf("%lf", &t[i]);
	}
}

void addlog(int size, double t[]) {
	int i;
	for (i = 0; i<size; i++) 
		t[i] = t[i] + log10(t[i]);
	}

int main() {
	double t1[4];
	int i;
	fill(4, t1);
	addlog(4, t1);

	printf("Here is the final content of this array: \n");
	for (i = 0; i<4; i++)
		printf("t1[%d] = %f\n", i, t1[i]);

	return 0;
}*/

//Two Dimensional Arrays 
/*#define N 3
#define M 2
int main() {
	int t1[N][M];
	int i,j;

	for (i = 0; i<N; i++)
		for (j = 0; j<M; j++) {
			printf("Givet1[%d][%d] : ", i, j);
			scanf("%d", &t1[i][j]);
	}

	printf("Here is the content of this array: \n");
	for (i = 0; i<N; i++)
		for (j = 0; j<M; j++) 
			printf("t1[%d][%d] = %d\n", i, j, t1[i][j]);

	return 0;
}*/

//Pointers
void fill(int size, double *t) {
	int i;
	for (i = 0; i<size; i++) {
		printf("Give t[%d] : ", i);
		scanf("%lf", &t[i]);
	}
}
void addlog(int size, double *t) {
	int i;
	for (i = 0; i<size; i++) 
		t[i] = t[i] + log10(t[i]);
}
int main() {
	double *t1;
	int n,i;

// dynamic allocation
	printf("What is the size of the array?\n");
	scanf("%d", &n);
	t1= (double *)malloc(n * sizeof(double)); 

// now we can fill the array:    
	fill(n, t1);
	addlog(n, t1);
	printf("Here is the final content of this array: \n");
	for (i = 0; i<n; i++)
	printf("t1[%d] = %f\n", i, t1[i]);

	return 0;
}

