//Q12. Write a program using a for loop to calculate the factorial of a given number.
#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int result=1;
    for(int a=1; a<=num; a++)
    {
        result=result*a;
    }
    printf("%d",result);
}