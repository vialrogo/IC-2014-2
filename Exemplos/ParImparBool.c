/* 
 * Neste programa vamos calcular se um número é par ou impar sem usar módulo (%)
 * 14-10-2014
 */

#include <stdio.h>
#include <stdbool.h> /*Precisa-se para poder usar o tipo de dado bool*/

/* A declaração dos nomes dos métodos é precisa nesta implementação 
 * para que cada método saiba que o outro existe.
 */
bool ePar(int numero);
bool eImpar(int numero);

/* Uma função que diz se um número é par */
bool ePar(int numero)
{
	if(numero == 0)
		return true;
	else
		return eImpar(numero-1);
}

/* Uma função que diz se um número é impar */
bool eImpar(int numero)
{
	if(numero==0)
		return false;
	else
		return ePar(numero -1);
}

int main()
{
	int numero;
	bool resposta;

  /* Pede o número */
  printf("Ingresse um numero: ");
  scanf("%d",&numero);
  resposta = ePar(numero);

  /* Dependendo da saída do método fala se é par ou impar */
  if (resposta)
    printf("O numero %d é par\n",numero);
  else
    printf("O numero %d é impar\n",numero);

	return 0;
}
