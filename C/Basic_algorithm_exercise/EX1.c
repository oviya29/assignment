/*
1. Write a C program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum. Go to the editor
Expected Output:

3
12

*/

#include <stdio.h>

int main()
{
int n1,n2;
printf("Enter number 1 : ");
scanf("%d",&n1);
printf("Enter number 2 : ");
scanf("%d",&n2);

if(n1 == n2)
{
  printf("Triple of %d is %d\n", n1, 3*n1);
}
else
{ 
  printf("sum of %d and %d is %d\n", n1, n2,  n1+n2);
}

return 0;

}