#include <stdio.h>

int main(int argc, char const *argv[])
{
  //Integer (Whole numbers)
  int n1 = 5;
  int n2 = 2;

  //Floting point numbers
  float myFloatNum = 5.9;

  // implicit conversion
  float div = (float) n1 / n2;


  //Character
  char myLetter = 'A';

  //Print variables

  printf("%.1f\n",div);
  printf("%.1f\n", myFloatNum);
  printf("%c\n", myLetter);



  return 0;
}
