/*swapping for the two array elements */

#include<stdio.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

int main()
{
	int n,p1,p2;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int x[n];
	
	for (int i = 0; i < n; i++)
	{
		printf("\nx[%d]= ",i);
		scanf("%d",&x[i]);
	}
	printf("Enter positions to be swapped: ");
	scanf("%d %d",&p1,&p2);

	printf("\nEntered Values :\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ",x[i]);
	}
	
	swap(&x[p1],&x[p2]);
	printf("\nAfter swapping two elements: \n");

	for (int i = 0; i < n; i++)
	{
		printf("%d ",x[i]);
	}
	return 0;
	
}
//Christan Wilbert
