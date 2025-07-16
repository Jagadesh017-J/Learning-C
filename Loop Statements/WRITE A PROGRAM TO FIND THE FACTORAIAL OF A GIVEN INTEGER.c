#include <stdio.h>

int main()
{
    int num,i,last=1;
    printf("enter the number  = ");
    scanf("%d",&num);
    for(i=1;num>=i;i++)
    {
        last=last*i;
    }
    printf(" Factorial of %d! = %d",num,last);
}
