#include <stdio.h>
int sum(int n,int cout);
int main()
{
    int n;
    printf("enter the number = ");
    scanf("%d",&n);
    int cout=0;
    int f=sum(n,cout);
    printf("%d",f);
    
}
int sum(int n,int cout)
{
    int i;
    if(n!=0)
    {
        return sum(n/=10,++cout);
    }
    else
    return cout;
}
