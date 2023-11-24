#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  char nome[5][200];
  int idade[5];
  int nota[5][3];
  float media[5];
  int i = 0, j = 0, soma[5] = { 0 };

  for (i = 0; i < 5; i++)
    {
      printf ("Informe o nome do aluno:");
      scanf ("%s", nome[i]);
      printf ("Informe a idade do aluno:");
      scanf ("%d", &idade[i]);

      for (j = 0; j < 3; j++)
	{
	  printf ("Informe a nota %d do aluno:", j + 1);
	  scanf ("%d", &nota[i][j]);
	  soma[i] += nota[i][j];
	}
      system ("clear");
      media[i] = soma[i] / 3;
    }
  system ("clear");
  fflush (stdin);

  for (i = 0; i < 5; i++)
    {
      printf ("Nome do aluno: %s\n", nome[i]);
      printf ("Idade do aluno: %d\n", idade[i]);
      printf ("Notas do aluno: \n");
      for (j = 0; j < 3; j++)
	{
	  printf ("%d\n", nota[i][j]);
	}
      printf ("MC)dia: %.1f\n", media[i]);
      if (media[i] >= 7)
	{
	  printf ("Aprovado!\n");
	}
      else if (media[i] >= 5)
	{
	  printf ("RecuperaC'C#o\n");
	}
      else
	{
	  printf ("Reprovado\n");
	}
    }
  return 0;
}
