#include<stdio.h>
#include<conio.h>
int main ()
{
char ch;
printf("Enter a character\n");
scanf("%c",&ch);

if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
{
printf("character is vowel\n");
}else{
printf("character is consonant\n");
}
return 0;
}
