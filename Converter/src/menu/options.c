#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "cleanConsole.h"
#include "welcomeScreen.h"
#include "header.h"
#include "socialMedia.h"
#include "session.h"
#include "main.h"

extern char userSession;
extern bool keepSessionAlive;

void decimalToBinary()
{

  // VARIABLES
  int decimalNumber;
  const int BASE_NUMBER = 2;

  cleanConsole();
  header();
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
  header();
  printf("\n");
  printf("\tNumero Binario: (%d)10 ---> ", decimalNumber);
  for (int j = index - 1; j >= 0; j--)
  {
    printf("%d", binary[j]);
  }
  printf("\n");
  printf("\n");
  
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
  sleep(3);
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");
  socialMedia();
  _exit(1);
}