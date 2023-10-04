#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,j;
	scanf("%d",&n);
	int array[n];
	for(i=0; i<n; i++)
	{
		scanf("%d",&array[i]);
	}
	int sum;
	scanf("%d",&sum);
	for (j=0; j<n; j++)
	{
		for(i=0;i<n;i++)
		{
			if( (array[j] + array[i]) == sum)
			{
				printf("num1 : %d num2 : %d\n",array[j],array[i]);
			}
		}
	}
	return 0;
}

