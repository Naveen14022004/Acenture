#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	int matrix[n][m];
	int i,j;
	for (i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	int key;
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(matrix[i][j] == key)
			{
				printf("%dth row %dth col",i,j);
				break;
			}
		}
	}
	return 0;
}

