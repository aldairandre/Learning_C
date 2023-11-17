#include <stdio.h>
#include "header.h"
#include "userInput.h"

extern int choice;

void welcomeScreen()
{
label1:
  header();
  printf("\n");
  printf("\tEscolha\n");
  printf("\n");
  printf("\t[ 1 ] - Decimal\n");
  printf("\n");
  printf("\t[ 2 ] - Binario\n");
  printf("\n");
  printf("\t[ 3 ] - Octal\n");
  printf("\n");
  printf("\t[ 4 ] - Hexdecimal\n");
  printf("\n");
  printf("\t[ 5 ] - Sair\n");
  scanf("\t\t%d", &choice);

  // passes the user input for conversion
  switch (choice)
  {
  case 1:
    userInput(1);
    break;
  case 2:
    userInput(2);
    break;
  case 3:
    userInput(3);
    break;
  case 4:
    userInput(4);
    break;
  case 5:
    userInput(5);
    break;
  default:
    printf("\nError: the number must be between 1 to 5.\n");
    printf("Press any key to continue... \n");
    getchar();
    goto label1;
  }
}