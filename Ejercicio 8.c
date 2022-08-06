#include <stdio.h>
#include <string.h>

int main()
{
  char auxiliar[100];//necesario para poder llevar a cabo la logica
  char string[100];  //variable a mostrar a la salida al final del programa
  const char clave[4] = "FIN"; //clave de finalizacion del while

  while(strcmp(auxiliar,clave) != 0)
  {
    //le pido datos al usuario
    printf("ingresar nombre de la persona: ");
    scanf("%s",auxiliar);

    //Logica
    if(strcmp(auxiliar,clave) != 0){

      if(strcmp(auxiliar,string)<0)
      {
        strcpy(string,auxiliar);
      }

    }

  }

  //Salida
  printf("En orden alfabetico,el primer nombre es: %s",string);

  return 0;
}
