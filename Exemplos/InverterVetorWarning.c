/*
 * Programa de exemplo para inverter um vetor.
 */

#include <stdio.h>

int main()
{
  int n,i;
  scanf("%d",&n);

  int vec[n];
  /* Esto funciona mas da um warning. O warning tem a ver com que em C (versões 
   * modernas de C e C++ permitem sim) não pode-se misturar a declaração de 
   * funções com as instruções. Aqui a declaração de vec está depois de uma lina
   * de instrução scanf. Para tirar o warning teríamos que declarar vec primeiro
   * mas com um valor constante já que ainda não teríamos o valor de n. */

  /* For para ler dados */
  for (i = 0; i < n; i++)
  {
    scanf("%d", &vec[i]);
  }

  /* For para mostar dados */
  for (i = 0; i < n; i++)
  {
    printf("%d ", vec[n-i-1]);
  }

  /* Salto de linha para melhor formatação */
  printf("\n");

  return 0;
}
