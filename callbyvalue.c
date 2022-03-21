

#include<stdio.h>
int swap(int a,int b)
{
	int t=a;
	a=b;
	b=t;
    printf("\nSwapped elements of x are as folows: %d %d \n",a,b); 	
	return(a,b);
}

int main()
{
    /*swapping for the two array elements */
	int n,p1,p2,p3;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int x[n];
	
	for (int i = 0; i < n; i++)
	{
		printf("\nx[%d]= ",i);
		scanf("%d",&x[i]);
	}
	printf("Enter 2 positions to be swapped: ");
	scanf("%d %d",&p1,&p2);

	printf("\nEntered Values :\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ",x[i]);
	}
	
	swap(x[p1],x[p2]);
	printf("\nAfter swapping two elements in main: \n");

	for (int i = 0; i < n; i++)
	{
		printf("%d ",x[i]);
	}

    /* Do the swapping for three elements sequentially one time / two times */

    printf("\nEnter 3 positions to be swapped: ");
	scanf("%d %d %d",&p1,&p2,&p3);

	printf("\nEntered Values :\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ",x[i]);
	}
	
	swap(x[p1],x[p2]);
	printf("\nAfter swapping 1 time elements in main: \n");

	for (int i = 0; i < n; i++)
	{
		printf("%d ",x[i]);
	}

    swap(x[p1],x[p2]);
	printf("\nAfter swapping 2nd time elements in main: \n");

	for (int i = 0; i < n; i++)
	{
		printf("%d ",x[i]);
	}
	return 0;
	
}
//Christan Wilbert
