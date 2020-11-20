#include<stdio.h>
#include<conio.h>
int main()
{
int j,i,n;
printf("Input upto to table number staring form 1: ");
scanf("%d",&n);
printf("multiplication table form 1 to%d \n",n);
for(i=1; i<=10;i++)
{
for(j=1; j<=n;j++)
{
if(j<=n-1)
printf("%dx%d= %d,",j,i,i*j);
else
printf("%dx%d= %d ",j,i,i*j);
}
printf("\n");
}
}
