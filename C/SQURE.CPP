#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=0;
printf("\nInput the number of terms : ");
scanf("%d",&n);
printf("\nThe squre natural upto %d terms are  ", n);
for(i=1;i<=n;i++)
{
sum=sum+i*i;
printf("%d",i*i);
}
printf("\nThe sum of squre nature number upto %d terms =%d",n,sum);
return 0;
}