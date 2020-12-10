 /*
15write a program in c to display the n terms of harmonic series and their sum. go to editor 1+/1/2+1/3+1/4+1/5 ....1/n.....

input the number of tarms : 5
expected output :
1/1+ 1/2+ 1/3 + 1/4+ 1/5
sum of series upto 5 terms : 2.28334
*/
#include<stdio.h>
#include<conio.h>
int main
{
int n,i;
float sum=0;
printf("input the number of terms : ");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
sum=sum+1/i;
}
printf("sum of series upto %d terms : %f\n",sum);
}