#include <stdio.h>

char palabra;
int letras();

int main() {

  printf("ingrese la palabra:");

  int a;
  a=letras();
  printf("la cantidad de letras que tiene la palabra es %d", a);

  return 0;
}

int letras(){

  for(int i=0; i<20;i++){

    if(palabra=getchar()=='\n'){

      return i;

    }

  }

  return 20;

}
