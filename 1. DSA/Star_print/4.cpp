#include<stdio.h>

int main()
{
	int i,j,k,n;
	printf("How many row you want :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i;j++){
			printf("  ");
		}
		for(k=i;k<=n;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
