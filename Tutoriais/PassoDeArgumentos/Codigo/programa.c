#include <stdio.h>

int main (int argc, char const* argv[])
{
  printf(argv[0]);    /* Imprime o nome do programa: programa.exe */    
  printf("\n");
  printf(argv[1]);    /* Imprime o primeiro parâmetro: parametro1 */ 
  printf("\n");
  printf(argv[2]);    /* Imprime o segundo parâmetro: parametro2 */
  printf("\n");

  return 0;
}
