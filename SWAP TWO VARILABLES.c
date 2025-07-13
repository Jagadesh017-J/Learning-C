my-Basic programs/README.md
#include <stdio.h>

int main()
{
    int num1,num2,temp;
    printf("enter the number = ");
    scanf("%d",&num1);
    printf("enter the number 2 = ");
    scanf("%d",&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("num1 = %d\n num2 = %d\n",num1,num2);
}
