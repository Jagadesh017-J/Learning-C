#include<stdio.h>
int main()
{
    int i,j,prime1,prime2;
    for(i=1;i<100;i++)
    {
        prime1=1;
        for(j=2;j<i;j++)
        {
          if(i%j==0)
          {
              prime1=0;
              break;
          }
        }
        prime2=1;
        for(j=2;j<i+2;j++)
        {
            if(i+2%j==0)
            {
              prime2=0;
              break;
            }
        }
        if(prime2&&prime1)
        printf("%d %d\n",i,i+2);
    }
}
