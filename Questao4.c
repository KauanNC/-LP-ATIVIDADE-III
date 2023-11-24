#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int
main ()
{
  setlocale (LC_ALL, "portuguese");

  int num[5];
  int i, par = 0, impar = 0, negativo = 0, positivo = 0;
  int maiorNum, menorNum=99999, somaP=0, somaG=0;
  float mediaP, mediaG;

  for (i = 0; i < 5; i++)
    {
      printf ("Informe o %d: valor:", i + 1);
      scanf ("%d", &num[i]);
        maiorNum = maiorNum > num[i] ? maiorNum : num[i];
        menorNum = menorNum < num[i] ? menorNum : num[i];
        somaG += num[i];
        mediaG = somaG/5;
        
      if (num[i] % 2 == 0)
	{
	  par++;
	  mediaP = somaG/par;
	}
      else
	{
	  impar++;
	}
      if (num[i] > 0)
	{
	  positivo++;
	}
      else
	{
	  negativo++;
	}
    }
  system ("cls||clear");

  for (i = 0; i < 5; i++)
    {
    }
  printf ("Quantidade de numeros impares: %d\n", impar);
  printf ("Quantidade de numeros negativos: %d\n", negativo);
  printf ("Maior numero: %d\n", maiorNum);
  printf ("Menor numero: %d\n", menorNum);
  printf ("Media de numeros pares: %.1f\n", mediaP);
  printf ("Media dos numeros inseridos: %.2f\n", mediaG);
  
  return 0;
}
