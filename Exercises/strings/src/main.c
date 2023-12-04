#include <stdio.h>
#include <string.h>
#include "header.h"
#include "footer.h"

void nameSize(char *name) {
  int size = strlen(name);
  printf("Your name has %d letters", size);
}

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
  nameSize(name);
  
  puts("");
  puts("");
  puts("");
  footer();

  return 0;
}
