#include<stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
  //This avoids segmentation dumped error
  if (argc!=2){
    fprintf(stderr, "Bad argument\n");
    return 1;
  }
  //Recieves an argument as a positive integer and assigns exactly one argument to it
  //Next we assign other variables
  int N =atoi(argv[1]);
  int E;
  int total = 0;

//We check if the argument assigned as integer is actually positive
  if(N>0){
    int i=0;
//confirming positivity and iterating  in other to increment a counter as initialized
    do {

      printf("Enter a positive integer: ");
      scanf("%d", &E);
      if ((E>0)&&(E%2 == 0)){

        total++;

        }
      else if(E<0){
        fprintf(stderr, "Caution Negetive number!\n" );
      }
      i++;
  //  printf("Yay this is an even number, lets iterate together!\n", )
  } while(i<N);
  printf("The total number of even numbers computed is: %d\n", total );
}
  else{
  fprintf(stderr, "check your arguments\n");
    }

  /*for (+ 0; i < N; i++)
  {

      label1:
      //Gives user acced to input exactly the number of arguments assigned
      printf("Enter a positive integer: ");
      scanf("%d", &E);

//Evaluates the users input for positivity and even numbers
      if ((E>0)&&(E%2 == 0)){
          total++;

    }
      else if(E<0){
        fprintf(stderr, "Caution Negetive number!\n" );
        goto label1;
      }

    }
    printf("The total number of even numbers computed is: %d\n", total );
  }


//  printf("Yay this is an even number, lets iterate together!\n", );

  else{
    fprintf(stderr, "check your arguments\n");
    return 2;
  }*/



 return 0;
 }
