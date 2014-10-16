/* 
 * Neste programa vamos calcular se um número é par ou impar sem usar módulo (%)
 * 14-10-2014
 */

#include <stdio.h>

/* A declaração dos nomes dos métodos é precisa nesta implementação 
 * para que cada método saiba que o outro existe.
 */
int ePar(int numero);
int eImpar(int numero);

/* Uma função que diz se um número é par */
int ePar(int numero)
{
	if(numero == 0)
		return 1;
	else
		return eImpar(numero-1);
}

/* Uma função que diz se um número é impar */
int eImpar(int numero)
{
	if(numero==0)
		return 0;
	else
		return ePar(numero -1);
}

int main()
{
	int numero;
	int resposta;

  /* Pede o número */
  printf("Ingresse um numero: ");
  scanf("%d",&numero);
  resposta = ePar(numero);

  /* Dependendo da saída do método fala se é par ou impar */
  if (resposta==1)
    printf("O numero %d é par\n",numero);
  else
    printf("O numero %d é impar\n",numero);

	return 0;
}
