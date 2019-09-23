#include<stdio.h>
//Ansh Tyagi IT 11912079
int main()
{
	int i,j,k=8;
	for(i=4;i<=10;i++)
	{
		for(j=0;j<k;j++)
		printf("%d,",i*j);
		printf("\n");
		k--;
	}
	return 0;
}
