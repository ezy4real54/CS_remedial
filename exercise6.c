#include <stdio.h>


int main(int argc, char*argv[]){
    if (argc > 1){
      for(int i=1; i<argc; i++)
        printf("%s\n", argv[i]);
      printf("%d was recieved as an arguments\n", argc -1);

    }

    else{
      printf("No argument Recieved");
    }

  return 0;
}
