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



int main(){
    int n;
    printf("please input a Positive integer:\n");
    scanf("%d", &n);

    if(n>=0){
    	if(Is_Even(n)==0){
    		printf("%d is an Even number\n", n);
       	}
    	else {
    		printf("%d is an Odd Number\n", n);
     	}
        
    }

    else {
        printf("Negative Number\n");
    }

    return 0;
    
}




          
