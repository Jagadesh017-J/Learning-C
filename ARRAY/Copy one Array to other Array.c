//Copy one Array to other Array
#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int b[5],i;
    for(i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    printf("B sting :\n");
    for(i=0;i<5;i++)
    printf("%d",b[i]);
}
