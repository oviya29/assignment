/*
25. Write a program in C to display the n terms of square natural number and their sum. Go to the editor
1 4 9 16 ... n Terms
Test Data :
Input the number of terms : 5
Expected Output :
The square natural upto 5 terms are :1 4 9 16 25
The Sum of Square Natural Number upto 5 terms = 55
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=0;
printf("\nInput the number of terms : ");
scanf("%d",&n);
printf("\nThe squre natural upto %d terms are :", n);
for(i=1;i<=n;i++)
{
sum=sum+i*i;
printf("%d ",i*i);
}
printf("\nThe sum of squre nature number upto %d terms = %d",n,sum);
return 0;
}