#include <stdio.h>

int menu()
{
  int choice;

  printf("\n");
  printf("\n");
  printf("\n");
  printf("\t===================================================\n");
  printf("\t\t\tConversor BINARIO\n");
  printf("\t===================================================\n");
  printf("\n");
  printf("\tEscolha\n");
  printf("\n");
  printf("\t[ 1 ] - Decimal para Binario\n");
  printf("\n");
  printf("\t[ 2 ] - Binario para Decimal\n");
  printf("\n");
  printf("\t[ 3 ] - Sair\n");
  scanf("%d", &choice);

  return choice;
}