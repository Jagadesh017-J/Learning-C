#include <stdio.h>

int main()
{
    int num1,num2,i;
    printf("enter the number 1 = ");
    scanf("%d",&num1);
    printf("enter the number 2 = ");
    scanf("%d",&num2);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\t %d x %d = %d\n",num1,i,num1*i,num2,i,num2*i);
    }
}
