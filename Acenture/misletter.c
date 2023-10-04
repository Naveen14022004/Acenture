#include<stdio.h>
#include<string.h>
int main()
{
	int data[50],i,n;
	printf("Enter the length of array : ");
	scanf("%d",&n);
	printf("Enter the number : ");
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&data[i]);
	}
	int sum=0;
	for(i=0;i<n-1;i++)
	{
		sum=sum+data[i];
	}
	int cal=0;
	cal=n*(n+1)/2;
	cal=cal-sum;
	printf("The missing number is : %d",cal);
	printf("\n");
}

