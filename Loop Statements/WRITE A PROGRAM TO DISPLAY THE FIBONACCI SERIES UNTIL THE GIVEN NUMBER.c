#include <stdio.h>

int main()
{
    int num,x,y,z;
    printf("enter the number  = ");
    scanf("%d",&num);
    for(x=0,y=1;num>=x;x=y,y=z)
    {
        printf("%d",x);
        z=x+y;
    }
}
