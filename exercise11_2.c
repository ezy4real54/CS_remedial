#include<stdio.h>
#include<stdlib.h>

/*A function that checks whether a positive integer is even*/

int Is_Even(int);
int Is_Odd(int);

int Is_Even(int x){
    if(x==0){
        return 0;
    }
    else{
        return Is_Odd(x-1);
    }
}
int Is_Odd(int x){
    if(x==0){           
        return 1;
    }
    else{
        return Is_Even(x-1);
    }
}



int main(int argc, char*argv[]){
	if (argc!=2){
    fprintf(stderr, "Bad argument\n");
    return 1;
  }
	int N =atoi(argv[1]);
 	
    	if(N>=0){
    		if(Is_Even(N)==0){
    			printf("%d is an Even number\n", N);
       		}
    		else {
    			printf("%d is an Odd Number\n", N);
     		}
        
    	}

    	else {
        	printf("Negative Number\n");
   	 }

 	return 0;
    
}

