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

void number_to_print(int number){
  if (number % 3 == 0){
    if (number % 5 == 0){
      printf("Fizz Buzz\n");
        return;
    }
    printf("Fizz\n");
    return;  
  }
  if (number % 5 == 0){
    printf("Buzz\n");
    return;
  }
  printf("%d\n", number);
    
      
}



int main(int argc, char*argv[]){
  if (is_number(argv[1])){
    int count = atoi(argv[1]);
    for (int i = 1; i <= count; i++){
      number_to_print(i);  
    }
  }
  else{
    printf("not nomba");
  }
  
}
