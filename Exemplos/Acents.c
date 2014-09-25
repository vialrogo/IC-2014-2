#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese"); /* Habilita a acentuação para o português */

  printf("Olá mundo com acentuações!\n");
  return 0;
}
