//PROGRAM FOR ADD & SUB OF TWO NOS.  1904
#include<stdio.h>
int main()
{
int num1,num2,sub,add,*p1,*p2;
printf("Enter first number: ");
scanf("%d",&num1);
printf("Enter second number: ");
scanf("%d",&num2);
p1=&num1;
p2=&num2;
add=*p1+*p2;
printf("\n\nAddition of%d and %d is %d",*p1,*p2,add);
sub=*p1-*p2;
printf("\n\nSubtraction of %d and %d is %d",*p1,*p2,sub);
return 0;
}