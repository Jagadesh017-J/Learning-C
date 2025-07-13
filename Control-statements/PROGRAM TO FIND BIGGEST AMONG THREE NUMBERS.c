#include <stdio.h>

int main()
{
    int num1,num2,num3;
    printf("enter the number = ");
    scanf("%d",&num1);
    printf("enter the number 2 = ");
    scanf("%d",&num2);
    printf("enter the number 3 = ");
    scanf("%d",&num3);
    if((num1>num2)&&(num1>num3))
    printf("num1 is big");
    else if((num2>num1)&&(num2>num3)) 
    printf("num2 is big");
    else if((num3>num1)&&(num3>num2)) 
    printf("num3 is big");
    else
    printf("ALL ARE EQUAL");
    
}
