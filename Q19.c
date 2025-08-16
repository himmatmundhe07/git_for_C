//Q19. Write a program using a while loop to calculate the factorial of a given number.
#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int result=1;
    int a=1;
    while(a<=num)
    {
        result=result*a;
        a++;
    }
    printf("%d",result);
}