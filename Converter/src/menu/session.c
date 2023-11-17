#include <stdio.h>
#include <stdbool.h>
#include "menu.h"
#include "options.h"
#include "cleanConsole.h"
#include "socialMedia.h"
#include <unistd.h>

bool session(char choice)
{

  int newChoice;

  bool keepSessionAlive;

  switch (choice)
  {
  case 's':
    keepSessionAlive = true;
    break;
  case 'S':
    keepSessionAlive = true;
    break;
  case 'n':
    keepSessionAlive = false;
    
    printf("\n");
    printf("\n");
    printf("\n");
    socialMedia();
    break;
  case 'N':
    keepSessionAlive = false;
    break;
  default:
    keepSessionAlive = false;
    break;
  }

  if (keepSessionAlive)
  {
    menu();
    scanf("\t\t%d", &newChoice);

    switch (newChoice)
    {
    case 1:
      decimalToBinary();
      return true;
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
  }
}