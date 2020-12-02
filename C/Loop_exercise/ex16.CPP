16. /*write a program in c to display the n terms of even natural number and their sum go to the editor test data :

input number of terms : 5
expected output :
the even number are  : 2 4 6 8 10
the sum of even natural number upto 5 terms : 30
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=0;
printf("input number of terms : ");
scanf("%d",&n);
printf("\n the even number are  : ");

for(i=1; i<=n; i++)
{
printf("%d",2*i);
sum+=2*i;
}
printf("\n the sum of even natural number upto %d terms : %d \n",n,sum);
}