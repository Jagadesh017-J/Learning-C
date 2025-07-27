//To find no.of.even and odd in given Array
#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int i, even=0,odd=1;
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("No.of.even in array = %d No.of.odd in array = %d  ",even,odd);
}
