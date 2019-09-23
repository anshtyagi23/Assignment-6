#include<stdio.h>
//Ansh Tyagi IT 11912079
int main()
{
int i,j;
for(i=1;i<7;i++)
   {
   for(j=1;j<=i;j++)
       printf("%d ",f(j));
   printf("\n");
   }
return 0;
}
int f(int n)
{
	int i,s=0;
	for(i=1;i<=n;i++)
	    s=s+i;
	return s;
}
