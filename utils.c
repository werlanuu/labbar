#include <stdio.h>

int ask_question_int(char *question){
  printf("%s\n", question);
  int result = -1;
  scanf("%d", &result);
  return result;
}

int main(int argc, char *argv[]){
  int tal;
  tal = ask_question_int("Första talet:");
  printf("Du skrev '%d'\n", tal);

  tal = ask_question_int("Andra talet:");
  printf("Du skrev '%d'\n", tal);

  return 0;
}
