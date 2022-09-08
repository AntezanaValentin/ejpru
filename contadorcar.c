#include <stdio.h>
#include <stdlib.h>

void char_count(char *s, int i){
 while (s[i] != 0) {
 i++;
 }
 printf("%d\n", i);
}

int main(void) {
  char *s = "hola";
  int i = 0;
  char_count(s, i);
}
