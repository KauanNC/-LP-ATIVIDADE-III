#include <stdio.h>
#include <stdlib.h>

int main() {

  char nome[5][200];
  float idade[5];
  int maiorI = 0, menorI = 9999;
  int i;
  float altura[5];
  float maiorA = 0, menorA = 9999;
  float peso[5];
  float maiorP = 0, menorP = 9999;
  int indexmaxI, indexminI, indexmaxP, indexminP, indexmaxA, indexminA;

  for (i = 0; i < 5; i++) {
    printf("Digite o nome: ");
    scanf("%s", nome[i]);

    printf("Digite a idade: ");
    scanf("%f", &idade[i]);

    printf("Digite a altura: ");
    scanf("%f", &altura[i]);

    printf("Digite o peso: ");
    scanf("%f", &peso[i]);

    system("clear");
    fflush(stdin);

    maiorI = maiorI > idade[i] ? maiorI : idade[i];
    menorI = menorI < idade[i] ? menorI : idade[i];

    maiorP = maiorP > peso[i] ? maiorP : peso[i];
    menorP = menorP < peso[i] ? menorP : peso[i];

    maiorA = maiorA > altura[i] ? maiorA : altura[i];
    menorA = menorA < altura[i] ? menorA : altura[i];
  }

  system("clear");

  for (i = 0; i < 5; i++) {
    printf("nome: %s\n", nome[i]);
    printf("idade: %.1f \n", idade[i]);
    printf("peso: %.2f \n", peso[i]);
    printf("altura: %.2f\n\n\n", altura[i]);

    indexmaxI = idade[i] == maiorI ? i : 0;
    indexminI = idade[i] == menorI ? i : 0;
    indexmaxP = peso[i] == maiorP ? i : 0;
    indexminP = peso[i] == menorP ? i : 0;
    indexmaxA = altura[i] == maiorA ? i : 0;
    indexminA = altura[i] == menorA ? i : 0;
  }

  printf("Pessoa mais alta\n");
  printf("maior altura \n");
  printf("nome: %s\n", nome[indexmaxA]);
  printf("peso: %.2f\n", peso[indexmaxA]);
  printf("altura: %.2f\n", altura[indexmaxA]);

  printf("Pessoa mais baixa\n");
  printf("menor altura: \n");
  printf("nome: %s \n", nome[indexminA]);
  printf("idade: %.1f \n", idade[indexminA]);
  printf("peso: %.2f \n", peso[indexminA]);
  printf("altura: %.2f \n", altura[indexminA]);

  printf("Pessoa com maior peso\n");
  printf("maior peso: \n");
  printf("nome: %s \n", nome[indexmaxP]);
  printf("idade: %.1f \n", idade[indexmaxP]);
  printf("peso: %.2f \n", peso[indexmaxP]);
  printf("altura: %.2f", altura[indexmaxP]);

  printf("Pessoa com  menor peso\n");
  printf("menor peso: \n");
  printf("nome: %s \n", nome[indexminP]);
  printf("idade: %.1f \n", idade[indexminP]);
  printf("peso: %.2f \n", peso[indexminP]);
  printf("altura: %.2f \n", altura[indexminP]);

  printf("Pessoa com mais idade\n");
  printf("maior idade: \n");
  printf("nome: %s \n", nome[indexmaxI]);
  printf("idade: %.1f \n", idade[indexmaxI]);
  printf("peso: %.2f \n", peso[indexmaxI]);
  printf("altura: %.2f", altura[indexmaxI]);

  printf("Pessoa com menor idade\n");
  printf("menor idade: \n");
  printf("nome: %s \n", nome[indexminI]);
  printf("idade: %.0f \n", idade[indexminI]);
  printf("peso: %.2f \n", peso[indexminI]);
  printf("altura: %.2f \n", altura[indexminI]);

  return 0;
}