#include <stdio.h>

int  i_minus,i_mayus;
char aux;
int main()
{
  printf("ingrese la palabra:");
  for(  i_minus=0, i_mayus=0; (aux = getchar()) != '\n';){

    if(aux == 'a' || aux == 'e' || aux == 'i' || aux == 'o' || aux == 'u'){

      i_minus++;

    }
    if(aux == 'A' || aux == 'E' || aux == 'I' || aux == 'O' || aux == 'U'){

      i_mayus++;

    }

  }

  printf("La cantidad de vocales \"minusculas\" que tiene la palabra son: %d \n", i_minus );
  printf("La cantidad de vocales \"mayusculas\" que tiene la palabra son: %d \n", i_mayus );

  return 0;
}
