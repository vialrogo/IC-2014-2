#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int limite, numero;

  /* Esta linha sempre vai para ter números aleatorizados*/
  srand(time(NULL)); 

  limite = 100;
  numero = rand()%limite + 1;

  printf("O número %d é um número aleatório entre 1 e %d\n", numero, limite);

  system("pause");
  return 0;
}
