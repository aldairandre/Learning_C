#include <stdio.h>
#include <stdbool.h>

// Functions
#include "menu.h"

int main(int argc, char const *argv[])
{

  // VARIABLES
  bool dontleave = true;

  int choose = menu();

  switch (choose)
  {
  case 1:
    decimalToBanary();
    break;
  case 2:
    banaryToDecimal();
    break;
  case 3:
    logOut();
    break;
  }

  printf("\n");
  printf("\n");
  printf("\n");

  return 0;
}
