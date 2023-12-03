#include <stdio.h>

#include "header.h"
#include "footer.h"

int main(int argc, char const *argv[])
{
  // VAREBLES
  char name[20];

  header();
  puts("What\'s your name?");
  puts("");
  gets(name);
  puts("");
  printf("Hello, %s\n", name);
  puts("");
  puts("");

  footer();

  return 0;
}
