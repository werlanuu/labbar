#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

  if (argc != 3){
    printf("Usage: ./a.out rows growth\n");
    return 1;
  }
  else{
    char *x = "*";
  
    int arg1 = atoi(argv[1]);
    int arg2 = atoi(argv[2]);
  
    int k = arg2;
    int i = 0;
    int j = 0;
    int number = 0;
    while (i < arg1){
      while (j < k){
        printf("%s", x);
        number++;
        j++;
      }
      printf("\n");
      j = 0;
      k = k + arg2;
      i++;
    }
    printf("\n%d", number);
    return 0;
  }
}
