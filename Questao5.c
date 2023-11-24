#include <stdio.h>
#include <stdlib.h>
int main(void) {

  char nome[200];
  int opcao, quant, contador = 0;
  float precoU, precoF, total = 0;

  do {
    printf("Tabela de codigos: \n");
    printf("1 - Adicionar uma venda \n2 - Exibir total de venda\n\n");
    printf("Informe a opcao desejada:");
    scanf("%d", &opcao);
    system("clear");

    switch (opcao) {
    case 1:
      printf("Informe o nome do produto: ");
      scanf("%s", nome);
      printf("Informe a quantidade do produto: ");
      scanf("%d", &quant);
      printf("Informe o preco do produto: ");
      scanf("%f", &precoU);

      precoF = precoU * quant;
      total += precoF;
      contador++;
      break;

    case 2:
      printf("Produto: %s\n", nome);
      printf("Quantidade: %d\n", quant);
      printf("Preco total: R$%.2f\n", precoF);
      break;

  default:
    printf("Opcao invalida\n");
    break;
  }
}
while (opcao != 2);

return 0;
}