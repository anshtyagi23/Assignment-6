#include<stdio.h>
//Ansh Tyagi IT 11912079
int main()
{
int i,j;
char c;
for(i=1;i<=6;i++)
   {
   c='A';
   for(j=1;j<=6-i;j++)
       {
       printf("%c",c);
       c=c+i;
       }   
   printf("\n");
   }
return 0;
}
