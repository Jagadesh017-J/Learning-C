//BUBBLE SORTING..
#include<stdio.h>
int main()
{
	int a[] = {10,5,26,1,83,17,26,72,34,34,19,83};
	int i,j,temp, n = sizeof a/sizeof a[0];
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0; i<n; i++)
		printf("%d ",a[i]);
}
