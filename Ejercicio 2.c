#include <stdio.h>

int a, b;
char c[100];

int main() {
  printf("ingrese la palabra:");

  for(a=0;(c[a]=getchar() ) != '\n'; a++);

  //se resta hasta que se llegue a la posicion 0 de la palabra, es decir, la primer letra
  for(b=a;b>=0;b--){
    printf("%c",c[b]);
  }

  return 0;
}
