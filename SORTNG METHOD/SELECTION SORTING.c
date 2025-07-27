//BUBBLE SORTING ....
#include<stdio.h>
int main()
{
	int a[] = {10,5,26,1,83,17,26,72,34,34,19,83};
	int i,j,temp, n = sizeof a/sizeof a[0];
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0; i<n; i++)
		printf("%d ",a[i]);
}
