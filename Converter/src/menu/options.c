#include <stdio.h>
#include <stdbool.h>
#include "cleanConsole.h"
#include "menu.h"
#include "session.h"
#include <unistd.h>

void decimalToBinary()
{

  // VARIABLES
  int decimalNumber;
  const int BASE_NUMBER = 2;
  char choice;

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
  printf("\tNumero Binario: (%d)10 ---> ", decimalNumber);
  for (int j = index - 1; j >= 0; j--)
  {
    printf("%d", binary[j]);
  }
  printf("\n");
  printf("\n");
  printf("\tDeseja continuar [s/n]");
  scanf("\t\t%c", &choice);

  while (true)
  {
    session(choice);
  }
}

void binaryToDecimal()
{
  char choice;
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
  while (true)
  {
    session(choice);
  }
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
  sleep(3);
  cleanConsole();
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\t===================================================\n");
  printf("\t\t>>> Creator: Aldair André (@André) <<< \n");
  printf("\t===================================================\n\n");

  printf("\t> GitHub: https://github.com/aldairandre \n");
  printf("\t> Facebook: https://www.facebook.com/aldair.andre99 \n");
  printf("\t> LinkedIn: https://www.linkedin.com/in/aldairandre \n\n");
}