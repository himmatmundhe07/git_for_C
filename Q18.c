//Q18. Write a program using a while loop to print all multiples of 7 up to 70.
#include <stdio.h>
int main()
{
    int num=7;
    while(num<=70)
    {
        printf("%d\n",num);
        num=num+7;
    }
}