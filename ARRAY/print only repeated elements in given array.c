//print only repeated elements in given array
#include <stdio.h>

int main()
{
	int a[] = {4, 2, 4, 5, 2, 3, 5, 1},i,j,;  // Example array
	int n = sizeof(a) / sizeof(a[0]);
	for(i=0; i<n; i++)
	{
		for(j=0; j<i; j++) {
			if(a[i]==a[j])
				break;
		}
		if(j==i)
		{
			for(j=i+1,c=1; j<n; j++)
				if(a[i] == a[j])
				printf("%d  ",a[i]);
		}
	}

}
