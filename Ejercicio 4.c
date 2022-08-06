#include <stdio.h>

int a;
char aux;
int main()
{
  printf("ingrese la palabra: " );
  for( a=0; (aux = getchar()) != '\n';){

    if(aux == 'a'){

      a++;

    }
  }

  printf("La cantidad de letras \"a\" que tiene la palabra ingresada son: %d",a);
  return 0;
}
