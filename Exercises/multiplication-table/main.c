#include <stdio.h>

void menu(void);

void menu()
{
  printf("\t=========================\n");
  printf("\t\tTABUADA\n");
  printf("\t=========================\n");
  printf("\n");
  printf("\n");
}

int main(int argc, char const *argv[])
{
  int inputTable;
  int MAX_VALUE_TABLE = 10;
  int COUNTER = 1;

  menu();

  printf("\tDigite um numero: ");
  scanf("%d",&inputTable);
  printf("\n");

  if (inputTable >= 2 && inputTable <= 1000)
  {
    while (COUNTER <= MAX_VALUE_TABLE)
    {
      int RES = inputTable * COUNTER;

      printf("\t%d x %d = %d\n",COUNTER,inputTable,RES);

      COUNTER = COUNTER + 1;
    }
    
  }else {
    printf("\tO numero inserido ultrapassa os limites imposto.\n\tEscolha um numero entre 2 até 1000\n\n");
  }
  


  return 0;
}
