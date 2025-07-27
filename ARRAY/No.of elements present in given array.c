//No.of elements present in given array
#include <stdio.h>

int main()
{
	int a[] = {10,20,22,30,10,40,50,22,10,88,34,50,20,40,30};
	int i,c=0,ele,n = sizeof a/sizeof a[0];
	for(i=0; i<n; i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("Enter the element\n");
	scanf("%d",&ele);
	for(i=0; i<n; i++)
	{
		if(ele == a[i])
			c++;
	}
	printf("no.of times the element is present : %d\n",c);
}

}
