#include <stdio.h>
int main()
{
	int k,i,j,t=0,m;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=10-2*i;k++)
		printf(" ");
		for(j=1;j<=i;j++){
			printf("*");
			printf(" ");
		}
		for(m=1;m<i;m++){
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
	for(i=4;i>=1;i--){
		for(k=10-2*i;k>=1;k--)
		printf(" ");
		for(j=1;j<=i;j++){
			printf("*");
			printf(" ");
		}
		for(m=1;m<i;m++){
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
	}

	

