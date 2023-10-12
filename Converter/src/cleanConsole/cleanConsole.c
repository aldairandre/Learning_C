#include <stdio.h>
#include <stdlib.h>

void cleanConsole()
{
  const int COMMAND_LINE = system("clear");
  if (COMMAND_LINE)
  {
    printf("\tLinux\n");
  }
  else
  {
    printf("\tOutros :\n %d\n", COMMAND_LINE);
  }
}