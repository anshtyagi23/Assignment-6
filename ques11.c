#include<stdio.h>
//Ansh Tyagi IT 11912079
int main()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<i;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		printf("%c",j+64);
		printf("\n");
	}
	return 0;
}
