#include <stdio.h>

int main()
{
    int num,power,i,last=1;
    printf("enter the number  = ");
    scanf("%d",&num);
    printf("enter the power  = ");
    scanf("%d",&power);
    for(i=1;power>=i;i++)
    {
        last=last*num;
    }
    printf(" power of %d^%d = %d",num,power,last);
}
