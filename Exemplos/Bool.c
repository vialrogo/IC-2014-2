/* Vamos provar algumas coisas neste arquivo */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Vamos primero provar os bool */
/* ansi C não tem bool, só tem _Bool que pode tomar valores 0 e 1, para ter bool tem que incluir stdbool.h */
bool flag;

int main()
{
  flag=true;
  if (flag)
  {
    printf("a flag funciona!!\n");
  }

  printf("Hello world!\n");

  system("pause");
  return 0;
}
