#include<stdio.h>
int main()
{
	int data[50][50],row,col,i,j;
	printf("Enter the no. of rows in matrix : ");
	scanf("%d",&row);
	printf("Enter the no. of. column in the matrix : ");
	scanf("%d",&col);
	printf("Enter the matrix : ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&data[i][j]);
		}
	}

	for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        if(data[i][j]==0)
                        {
                                data[i][j]=-1;
                        }
                }
        }

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(data[i][j]==-1)
			{
				int t,p;
				for(t=i;t<row;t++)
				{
					data[t][j]=0;
				}
				for(p=j;p<col;p++)
				{
					data[i][p]=0;
				}
			}
		}		
	}
	for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        printf("%d ",data[i][j]);
                }
		printf("\n");
        }
	//printf("no zero encountered");
}
