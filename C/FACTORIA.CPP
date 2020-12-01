/*15. Write a C program to calculate the factorial of a given number. Go to the editor
Test Data :
Input the number : 5
Expected Output :
The Factorial of 5 is: 120
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,f=1;
printf("Input the number  : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  f=f*i;
}
printf("The Factorial of %d is: %d",n,f);
}
