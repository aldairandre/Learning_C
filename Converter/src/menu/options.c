#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "cleanConsole.h"
#include "welcomeScreen.h"
#include "header.h"
#include "socialMedia.h"
#include "session.h"
#include "main.h"

int decimal_hexadecimal(int deci)
{
  int rem[50];
  int i = 0;
  int len = 0;
  printf("\n");
  if (deci >= 10)
  {
    do
    {
      rem[i] = deci % 16;
      deci = deci / 16;
      i++;
      len++;
    } while (deci != 0);

    printf("\tNumero Hexa-Decimal ---> ");
    for (i = len - 1; i >= 0; i--)
    {
      switch (rem[i])
      {
      case 10:
        printf("A");
        break;

      case 11:
        printf("B");
        break;

      case 12:
        printf("C");
        break;

      case 13:
        printf("D");
        break;

      case 14:
        printf("E");
        break;

      case 15:
        printf("F");
        break;

      default:
        printf("%d", rem[i]);
      }
    }
  } else printf("\tNumero Hexa-Decimal ---> %d",deci);
}

void decimalToBinary(int decimalNumber)
{

  // CONSTANTS
  const int BASE_NUMBER_DEC = 2;
  const int BASE_NUMBER_OCT = 8;

  // VARIABLES

  int binary[32];
  int octal[50];
  int decimal = decimalNumber;
  int octalDec = decimalNumber;
  int index = 0;

  cleanConsole();
  header();
  printf("\n");
  printf("\n");
  printf("\n");

  // Decimal to banary
  // Decimal to octal

  while (decimal > 0)
  {
    binary[index] = decimal % BASE_NUMBER_DEC;
    decimal /= BASE_NUMBER_DEC;

    octal[index] = octalDec % BASE_NUMBER_OCT;
    octalDec /= BASE_NUMBER_OCT;

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
  printf("\tNumero Octal: (%d)8 ---> ", decimalNumber);
  for (int j = index - 1; j >= 0; j--)
  {
    printf("%d", octal[j]);
  }
  printf("\n");
  decimal_hexadecimal(decimalNumber);
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