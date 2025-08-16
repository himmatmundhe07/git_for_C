//Q23. Write a program using a while loop to count down from a given number to 1.
#include <stdio.h>
int main()
{
    int num1;
    scanf("%d",&num1);
    while(num1>=1)
    {
        printf("%d\n",num1);
        num1=num1-1;
    }

}