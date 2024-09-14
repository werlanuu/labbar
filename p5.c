#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){

  if (argc != 2){
    printf("Usage: ./a.out number");
    return 1;
  }
  else{
    int number = atoi(argv[1]);

    if (number < 2){
      printf("%d is not a prime number.\n", number);
      return 0;
    }
    
    int i = 2;
    int j = 1;

    while (i < floor(sqrt(number)) + 1){
      while (j < number){
        if (i * j == number){
          printf("%d is not a prime number.\n", number);
          return 0;
        }
        j++;
      }
      i++;
      j = 1;
    }
    printf("%d is a prime number.\n", number);
    return 0;
  }
}
