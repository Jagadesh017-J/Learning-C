#include <stdio.h>
void fib(int n,int x,int y,int z);
int main()
{
    int n,x=0,y=1;
    printf("enter = ");
    scanf("%d",&n);
    fib(n,x,y,1);
}
void fib(int n,int x,int y,int z)
{
    if(z<n)
    {
        z=x+y;
        printf("%d ",x);
        x=y;
        y=z;
        fib(n,x,y,z);
    }
}
