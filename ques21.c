#include<stdio.h>
//Ansh Tyagi IT 11912079
int main()
{
	int i,j;
	for(i=1;i<6;i++)
	{
		for(j=1;j<=fn(i);j++)
		printf("A");
		printf("\n");
	}
	return 0;
}
int fn(int n)
{
	int i,s=1;
	for(i=1;i<n;i++)
	s=s+i;
	return s;
}
