//Biggest element in given array
#include<stdio.h>
int main()
{
        int a[] = {10,5,26,1,83,17,26,72,34,34,19,83};
        int i,big, n = sizeof a/sizeof a[0];
        big = a[0];
        for(i=1;i<n;i++) 
        {
                if(big < a[i])
                big = a[i];
        }
        printf("big = %d\n",big);
}
