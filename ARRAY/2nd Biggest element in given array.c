//2nd Biggest element in given array
#include <stdio.h>

int main()
{
        int a[] = {10,5,26,1,83,17,26,72,34,34,19,83};
        int i,big1,big2, n = sizeof a/sizeof a[0];
        if(a[0]>a[1])
        {
            big1=a[0];
            big2=a[1];
        }
        else
        {
            big1=a[0];
            big2=a[1];
        }
        for(i=1;i<n;i++) 
        {
                if(big1 < a[i])
                {
                big2=big1;
                big1 = a[i];
                }
                else if((a[i]>big2)&&(a[i]!=big1))
                big2=a[i];
        }
        printf("big1 = %d big2 = %d\n",big1,big2);
}
