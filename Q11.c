//Write a program using a for loop to print all numbers divisible by 3 from 1 to 30.
#include<stdio.h>
int main()
{
    for (int num=3; num<=30; num=num+3)
    {
        printf("%d\n",num);
    }
}