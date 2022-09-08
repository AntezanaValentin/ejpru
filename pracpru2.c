//Ej 10
#include <stdio.h>
#include <stdlib.h>
#include "ctype.h"

void to_lower(char *string){
  // printf("Introduce una palabra en minuscula\n");
  int i = 0;
  if (i != '\n') {
    int n = tolower(string[i  ]);
    i++;
    printf("%c", n);
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  char *string = "HOLA";
  to_lower(string);
}
