#include<stdio.h>
//Ansh Tyagi IT 11912079
int main()
{
	int i,j;
	for(i=6;i>=1;i--)
	{
		for(j=i;j>1;j--)
		printf(" ");
		for(j=i;j<=6;j++)
		printf("%c",j+64);
		printf("\n");
	}
	return 0;
}
