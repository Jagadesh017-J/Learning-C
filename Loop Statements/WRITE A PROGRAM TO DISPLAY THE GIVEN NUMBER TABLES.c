#include <stdio.h>

int main()
{
    int num,i;
    printf("enter the number 1 = ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",num,i,num*1);
    }
}
