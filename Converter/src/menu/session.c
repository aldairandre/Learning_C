#include <stdio.h>
#include <stdbool.h>
#include "options.h"
#include "cleanConsole.h"
#include "socialMedia.h"
#include <unistd.h>

extern int choice;
extern char userSession;
extern bool keepSessionAlive;

bool session()
{
  switch (userSession)
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
    _exit(1);
    break;
  case 'N':
    keepSessionAlive = false;
    printf("\n");
    printf("\n");
    printf("\n");
    socialMedia();
    break;
  default:
    keepSessionAlive = false;
    break;
  }

  if (keepSessionAlive)
  {
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
  }
}