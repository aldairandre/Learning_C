#include <stdio.h>
#include <stdbool.h>

// Functions
#include "welcomeScreen.h"
#include "options.h"
#include "session.h"

int choice;

char userSession;
bool keepSessionAlive = true;

int main()
{

  welcomeScreen();
  
  return 0;
}
