#include<stdio.h>
#include "fun.h"
int main()
{
    int num1=10,num2=20,num3=30,num4,num5;
    num4=add(num1,num2,num3);
    num5=square(num1);
    even(num1);
    printf("addition is %d \n square is %d",num4,num5);
    return 0;
}