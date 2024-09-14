#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(int argc, char *argv[]){
  if (argc != 3){
    printf("Usage: ./a.out <number> <number>");
    return 1;
  }
  else{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    
    while(b != 0){
      int temp = b;
      b = a % b;
      a = temp;
    }
    printf("gcd(%d, %d) = %d", atoi(argv[1]), atoi(argv[2]), a);
    return 0;
  }
}
