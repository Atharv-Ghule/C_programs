//PROGRAM FOR NUM IS +,- OR 0  1904
#include<stdio.h>
#include<conio.h>
void main()
{
int number;
printf("Enter the number-----");
scanf("%d",&number);
if(number>0)
{
printf("The number is positive");
}
else if(number<0)
{
printf("The number is negative");
}
else
{
printf("The number is zero");
}
getch();
}