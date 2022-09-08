//Ej 20
#include <stdio.h>
#include <stdlib.h>

void print_menu(char *a[6]) {
  int eleccion;
  printf("Bienvenido a mi menú\n");
  int i = 0;
    while(1){
      for (i = 0; i < 6; i++) {
        printf("%d_%s\n", i+1, a[i]);
      }
      scanf("%d\n", &eleccion);
      switch (eleccion) {
        case 1:
        printf("elegiste opcion 1\n");
        break;
        case 2:
        printf("elegiste opcion 2\n");
        break;
        case 3:
        printf("elegiste opcion 3\n");
        break;
        case 4:
        printf("elegiste opcion 4\n");
        break;
        case 5:
        printf("elegiste opcion 5\n");
        break;
        case 6:
        exit(0);
      }
    }
  }

int main(void) {
  char *a[6] = {
    "opcion1",
    "opcion2",
    "opcion3",
    "opcion4",
    "opcion5",
    "salir"
  };
  print_menu(a);
}
