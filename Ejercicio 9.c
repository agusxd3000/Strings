#include <stdio.h>
#include<string.h>


int main()
{

  char string[10];
  printf("escribir palabra a cambiar: ");

  for(int i=0;i<10;i++)
  {
    if((string[i]=getchar()) == 10)
    break;
  }
  //condiciones necesarias para que el programa no pinche en las ultimas letras del abcedario
  switch(string[i]){
    case 120:
      string[i]=97;
    break;

    case 121:
      string[i]=98;
    break;

    case 122:
      string[i]=99;
    break;

    case 88:
      string[i]=65;
    break;

    case 89:
      string[i]=66;
    break;

    case 90:
      string[i]=67;
    break;

    default:
      string[i] += 3;
    break;
  }

  printf("la palabra transformada es: %s\r",string);


}
