 /*write a c program  to define user defined funtion to find power of a number using for loop

 Expected Output:
------------------
Enter the a number :2
Enter power of the number:4
2 power 4 is 16

*/
#include<stdio.h>
#include<conio.h>

float power(float , float );


int main()
{
int x,y;
float result;

printf("Enter the a number :");
scanf("%d",&x);
printf("Enter power of the number:");
scanf("%d",&y);

result = power(x,y);

printf("%d power %d is %f",x,y,result);

return 0;
}


// power function.
float power(float x, float y)
{
int i;
float result=1;

for (i=1;i<=y;i++)
{
result=result*x;
}

return result;
}

