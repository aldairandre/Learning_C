#include <stdio.h>
#include <unistd.h>
#include "cleanConsole.h"
#include "digitChecker.h"
#include "header.h"
#include "socialMedia.h"
#include "welcomeScreen.h"

#define ENTER 13
#define TAB 9
#define BKSP 8

void userInput(int choice)
{
  cleanConsole();

  if (choice == 1) // Decimal input validation code
  {
    long int deci;
    int flag = 0;
    header();
    printf(("\n"));
    printf("\tDigite o decimal: ");
    scanf("%ld", &deci);

    if (deci > 0)
      flag = digitChecker(deci, choice);
    else
      flag = 1;

    if (flag == 1)
    {
      cleanConsole();
      printf("\nError: Decimal number can't be negative. \n");
      printf("Press any key to continue... \n");
      sleep(5);
      cleanConsole();
      welcomeScreen();
    }
    else
    {
      printf("Feature sendo criada\n");
    }
  }
  else if (choice == 2) // Binary input validation code
  {

    printf("Feature sendo criada\n");

    /* long int bi;
    int flag = 0;

    printf("Digite o binario: ");
    scanf("%ld", &bi);

    flag = digitChecker(bi, choice);

    if (flag == 1)
    {
      printf("\nError: Binario apenas pode ter 0, 1. \n");
      printf("Press any key to continue... \n");
      getch();
    }
    else
    {

      printf("Feature sendo criada\n");
    } */
  }
  else if (choice == 3) // Octal input validation code
  {

    printf("Feature sendo criada\n");
    /* long int octal;
    int flag = 0;

    printf("Enter the octal: ");
    scanf("%ld", &octal);

    flag = digitChecker(octal, choice);

    if (flag == 1)
    {
      printf("\nError: Octal digits can only be between 0 to 7. \n");
      printf("Press any key to continue... \n");
      getch();
    }
    else
    {
      printf("Feature sendo criada\n");
    } */
  }
  else if (choice == 4) // HexaDecimal input validation code
  {

    printf("Feature sendo criada\n");
    /* char hexa[50];
    char ch;
    int i = 0, j = 0, k = 0, flag = 0;

    printf("Enter the hexadecimal: ");

    while (1)
    {
      ch = getch();
      if (ch == ENTER || ch == TAB)
      {
        hexa[i] = '\0';
        break;
      }
      else if (ch == BKSP)
      {
        if (i > 0)
        {
          i--;
          printf("\b \b"); // for backspace
        }
      }
      else
      {
        hexa[i++] = ch;
        printf("%c", ch);
      }
    }

    for (j = 0; j < i; j++)
    {
      if ((hexa[j] >= 'A' && hexa[j] <= 'F') || (hexa[j] >= 'a' && hexa[j] <= 'f') || isdigit(hexa[j]))
        k++;
      else
      {
        flag = 1;
        break;
      }
    }

    if (flag == 1)
    {
      printf("\n\nError: Hexadecimal digits can only be between 0 to 9 & A to F. \n");
      printf("Press any key to continue... \n");
      getch();
    }
    else
    {
      printf("Feature sendo criada\n");
    } */
  }
  else if (choice == 5)
  {
    cleanConsole();
    socialMedia();
    _exit(1);
  }

  else // Very rare case message
    printf("\n>> Unexpected Error occured. Report to program Administrator << \n");
}