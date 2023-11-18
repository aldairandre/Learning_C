#include <stdio.h>


// validation function for each single digit of a number according to conversion condition 
int digitChecker(int num, int choice)
{
    long int rem, temp=0, flag=0;
    temp = num;

        while(temp != 0)
        {    
            rem = temp % 10;

            if(rem >= 0 && rem <= 9 && choice == 1) // binary, choice = 1 
                temp = temp / 10;
            else if((rem == 0 || rem == 1) && choice == 2) // decimal, choice = 2
                temp = temp / 10;
            else if(rem >= 0 && rem <=7 && choice == 3) // octal, choice = 3
                temp = temp / 10;
            else
            {
                flag = 1;
                break;
            }
        }
    return flag;
}