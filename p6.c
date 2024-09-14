#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

bool is_number(char *str){
  for (int i = strlen(str) - 1 ; i >= 1; i--){
    if (!isdigit(str[i])){
      return false;
    }
  }
  return true;
}


int main(int argc, char *argv[]){
  if (argc != 3){
    printf("Usage: ./a.out <number> <number>");
    return 1;
  }
  if(is_number(argv[1]) && is_number(argv[2])){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    if (a < 0 || b < 0){
      printf("Only positive integers allowed.");
      return 1;
    }
    
    while(b != 0){
      int temp = b;
      b = a % b;
      a = temp;
    }
    printf("gcd(%d, %d) = %d", atoi(argv[1]), atoi(argv[2]), a);
    return 0;
  }
  else{
    if (!is_number(argv[1])){
      printf("%s is not a number. ", argv[1]);
      if (!is_number(argv[2])){
        printf("%s is not a number.", argv[2]);
      }
      printf("\n");
      return 1;
    }
    if (!is_number(argv[2])){
      printf("%s is not a number.\n", argv[2]);
      return 1;
    }
    printf("Please provide a command line argument!\n");
    return 1;
  }
}
