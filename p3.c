#include <stdio.h>
int main(void){
  char *x = "*";
  int i = 1;
  int number = 0;
  
  while (i <= 10){
    int j = 1;
    while (j <= i){
      printf("%s", x);
      j++;
      number++;
    }
    printf("\n");
    i++;
  }
  printf("\n%d", number);
  return 0;
}
