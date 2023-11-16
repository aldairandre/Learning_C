#include <stdio.h>
#include <stdbool.h>

// Functions
#include "../include/menu.h"
#include "../include/options.h"

int main(int argc, char const *argv[])
{

  int choice;

  menu();
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    decimalToBinary();
    break;
  case 2:
    binaryToDecimal();
    break;
  case 3:
    logOut();
    break;
  default:
    printf("Escolha inválida!\n");
  }

  printf("\n");
  printf("\n");
  printf("\n");

  return 0;
}
