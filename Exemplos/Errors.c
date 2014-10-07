/*
 * Programa:  Nome do programa
 * Arquivo:   Nome do arquivo
 *
 * Objetivo do programa: Mostrar alguns erros comuns na hora de programar a través de um exemplo com cálculos simples.
 *
 * Feito por: Victor Alberto Romero
 * 07-10-2014
 * */

#include <stdlib.h>
#include <stdio.h>

/* Aqui vai a uma descrição geral das constantes e variáveis globais se é preciso */
#define PI 3.14159265359	

/*
 * Esta é uma função que não faz nada. Seu objetivo é ... nenhum.
 * */
void umaFuncaoQueNaoFazNada()
{
  //Algum dia vou ser útil
}

/*
 * Esta é uma função útil!! :D 
 * Seu objetivo é tomar um numero inteiro e calcular seu factorial.
 * Entradas: Número inteiro n
 * Saídas:   Número inteiro factorial de n
 * */
int calculaFactorialIterativo(int n)
{
  int i,saida;

  if(n==0)
    return 1;

  if(n<0)
    return 0;

  for (i = 1; i <= n; i++)
  {
    saida = saida*i;
  }
}

int main()
{
  int obj, esp, comb;

  /* Vamos ter a entrada de dados de nosso programa */
  printf("Programa da monitoria de MAC110\n\n");
  printf("Estre programa calcula o número de permutações possíveis de um conjunto de objetos num determinado número de espaços\n\n");

  printf("Ingresse o número de objetos: ");
  scanf("%d",obj);
  printf("Ingresse o número de espaços: ");
  scanf("%d",esp);

  /* Faz os cálculos */
  comb = calculaFactorialIterativo(obj)/calculaFactorialIterativo(obj-esp);

  /* Imprime a saída */
  printf("O número de combinações possíveis é  %d", comb)

  return 0;
}
