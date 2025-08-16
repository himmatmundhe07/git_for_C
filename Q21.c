//Q21. Write a program using a while loop to print numbers from 1 to a given number entered by the user.
#include <stdio.h>
int main()
{
    int num=1;
    int num2;
    scanf("%d",&num2);
    while(num<=num2)
    {
        printf("%d\n",num);
        num++;
    }
}