
/*write a  program in c display the sum of the series [9+99+999+9999...] go to the editor test data:
input the number of terms : 5
expected output:
9 99 999 9999 99999
input the number of terms : 5
the sum of the saries =111105
*/
#include<stdio.h>
#include<conio.h>
int main()
{
long int n,i,t=9;
int sum =0;
printf("input the number of terms :");
scanf("%ld",&n);
for(i=1; i<=n;i++)
{
sum+=t;
printf("%ld ",t);
t=t*10+9;
}
printf("\nthe sum of the saries =%d \n", sum);
}