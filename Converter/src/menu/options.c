#include <stdio.h>
#include "cleanConsole.h"
#include "menu.h"
#include <unistd.h>

void decimalToBinary()
{

  // VARIABLES
  int decimalNumber;
  const int BASE_NUMBER = 2;

  cleanConsole();
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\t===================================================\n");
  printf("\t\tConversor DE SISTEMAS NUMERICOS\n");
  printf("\t===================================================\n");
  printf("\n");
  printf("\n");
  printf("\n");

  // Getting the decimal number

  printf("\tDigite um número decimal: ");
  scanf("%d", &decimalNumber);

  // Form to convert the decimal number into a bunary format

  if (decimalNumber == 0)
  {
    printf("0");
  }

  int binary[32];
  int index = 0;

  int decNumber = decimalNumber;

  while (decNumber > 0)
  {
    binary[index] = decNumber % BASE_NUMBER;
    decNumber /= BASE_NUMBER;
    index++;
  }

  cleanConsole();
  sleep(1);
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\t===================================================\n");
  printf("\t\tConversor DE SISTEMAS NUMERICOS\n");
  printf("\t===================================================\n");
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\tNumero Binario: (%d)10 ---> ", decimalNumber);
  for (int j = index - 1; j >= 0; j--)
  {
    printf("%d", binary[j]);
  }
}

void binaryToDecimal()
{
  cleanConsole();
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\tOPÇÃO ESCOLHIDA: [ 2 ] - Binario para Decimal\n");
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\t===================================================\n");
  printf("\t\tConversor DE SISTEMAS NUMERICOS\n");
  printf("\t===================================================\n");
  printf("\n");
  printf("\n");
  printf("\n");
}

void logOut()
{
  cleanConsole();
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\t===================================================\n");
  printf("\t\tConversor DE SISTEMAS NUMERICOS\n");
  printf("\t===================================================\n");
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\tEspero que tenha desfutado da nossa calculadora\n");
  sleep(2);
}
