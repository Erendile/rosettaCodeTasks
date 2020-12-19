#include <stdio.h>
#include <stdlib.h>


/*
Numbers (positive integers expressed in base ten) that are (evenly) divisible by the number formed by the first and last digit are known as gapful numbers.
Example
187 is a gapful number because it is evenly divisible by the number   17   which is formed by the first and last decimal digits of   187.
*/
/* first --> units digit */


int numberIntoDigits(int a)
{   int first=0,last=0,temp=a;
    while(a>0)
    {   if(last==0)
        {
            first = a%10;
            last = 10;
        }
        a = a/10;

        if(a<10 && a>0)
        {
            last = a;
        }
    }
    if(temp %(first+10*last)==0)
        return 1;
    else
        return 0;
}

int main()
{
    int number=0;
    printf("Please enter your gapful number\n");
    scanf("%d",&number);
    if(numberIntoDigits(number)==1)
    {
        printf("Yes this is Gapful Number!");
    }
    else
        printf("Sorry,this is not Gapful Number.");

    return 0;
}

/*--------------------------And if you wanna see the first fifty gapful number--------------------------*/

#include <stdio.h>
#include <stdlib.h>
int main()
{   int counter = 0;
    int a = 100;
    while(counter<50)
    {
      int first=0,last=0,temp=a;
    while(a>0)
    {   if(last==0)
        {
            first = a%10;
            last = 10;
        }
        a = a/10;

        if(a<10 && a>0)
        {
            last = a;
        }
    }
    if(temp %(first+10*last)==0)
        {
            printf("%d. : %d\n",counter+1,temp);
            counter++;
        }
          a = temp + 1;
    }

    return 0;
}

