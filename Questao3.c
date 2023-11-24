#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  char nome[10][200];
  char num[10][200];
  int opcao, i, contador = 0;

  printf ("Agenda telefonica: \n");
  printf ("1- Adicionar pessoa \t2- Encerrar programa\n");
  do
    {
      printf ("Informe o codigo: ");
      scanf ("%d", &opcao);

      if (opcao == 1)
	{
	  printf ("Nome da pessoa:");
	  scanf ("%s", nome[contador]);
	  fflush (stdin);
	  printf ("Numero da pessoa:");
	  scanf ("%s", num[contador]);
	  fflush (stdin);
	  system ("clear");
	  contador++;

	}
      else
	{
	  break;
	}
    }
  while (opcao == 1);

  for (i = 0; i < contador; i++)
    {
      printf ("Nome: %s\n", nome[i]);
      printf ("Telefone: %s\n", num[i]);
      printf ("Programa encerrado\n");
    }
  return 0;
}
