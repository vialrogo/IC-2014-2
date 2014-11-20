/* 
 * MAC 110 - Introdução à Computação
 * EP3: Leitura de arquivo
 * Por: Victor Alberto Romero González
 * 13 Novembro de 2014
 */

#include <stdio.h>

#define H 8 /* Número de filas */
#define W 9 /* Número de colunas */
#define P 9 /* Comprimento sequências */
#define N 8 /* Número de direções */

int main(int argc, char const* argv[])
{
  FILE *arqentrada; 
  int i,j,numseqs;
  int RETANG[H][W];
  int PADRAO[P];

  /* abre o arquivo para leitura.*/ 
  arqentrada = fopen(argv[1], "r");

  /* se não conseguiu abrir o arquivo */ 
  if (arqentrada == NULL)
  { 
    printf("Não consegui abrir o arquivo.\n"); 
    return 0; 
  }

  /* Primeiro lê-se a matriz */
  for (i = 0; i < H; i++)
    for (j = 0; j < W; j++)
      fscanf(arqentrada, "%d", &RETANG[i][j]);

  /* Lemos o número de sequências */
  fscanf(arqentrada, "%d\n", &numseqs);

  /* por último pedimos as sequências */
  for (i = 0; i < numseqs; i++)
  {
    /* lemos a sequência l. Os espaços faltantes têm que estar preenchidos com zeros */
    for (j = 0; j < P; j++)
      fscanf(arqentrada, "%d", &PADRAO[j]);

    /* Processar o padrão */
  } 

  /* fecha o arquivo */ 
  fclose(arqentrada);
  printf("Arquivo lido corretamente\n");

  return 0;
}
