/*
 * Programa de exemplo para inverter um vetor.
 */

#include <stdio.h>

#define MAX 100

int main()
{
  int n,i;
  int vec[MAX];

  scanf("%d",&n);

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
