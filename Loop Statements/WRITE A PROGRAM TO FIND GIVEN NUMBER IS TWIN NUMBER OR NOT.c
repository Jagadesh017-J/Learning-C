//WRITE A PROGRAM TO FIND GIVEN NUMBER IS TWIN NUMBER OR NOT..
#include <stdio.h>

int main()
{
    int i,j,temp=1;
    for(i =0;i<=100;i++)
    {
        temp=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                temp=0;
                break;
            }
        }
        if(temp==1)
        for(j=2;j<(i+2);j++)
        {
            if((i+2)%j==0)
            {
                temp=0;
                break;
            }
        }
        if(temp==1)
        printf("(%d,%d)",i,i+2);
    }
    
    return 0;
}
