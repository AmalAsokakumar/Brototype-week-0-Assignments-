#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n;
	printf("ENter the row: ");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
		if(i<=n)
		{
			for(j=1;j<=2*n-1;j++)
			{
				if((j>=(n-i)+1 && j<=n )|| (j<=(n+i)-1 && j>=n))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		else
		{
			for(j=1;j<=2*n-1;j++)
			{
				if((j>=(i-n)+1 && j<=n) || (j>n && j<=2*n-(i-n)-1))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}

	}
	return EXIT_SUCCESS;
}