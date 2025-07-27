//No.of.time each elements present in given array
#include <stdio.h>

int main()
{
	int a[] = {4, 2, 4, 5, 2, 3, 5, 1},i,j,count;  // Example array
	int n = sizeof(a) / sizeof(a[0]);
	for(i=0;i<n;i++)
	{
	    for(j=0;j<i;j++)
	    {
	        if(a[i]==a[j])
	        break;
	    }
	    if(i==j)
	    {
	        count=1;
	        for(j=i+1;j<n;j++)
	        {
	            if(a[i]==a[j])
	            count++;
	        }
	         printf("%d---> %d\n",a[i],count);
	    }
	}
}
