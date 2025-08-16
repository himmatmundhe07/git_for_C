//Q16. Write a program using a while loop to calculate the sum of numbers from 1 to 50.
#include <stdio.h>
int main()
{
    int num=1;
    int num1=0;
    while(num<=50)
    {
       num1=num+num1;
       num++;
    }
    printf("%d",num1);
}