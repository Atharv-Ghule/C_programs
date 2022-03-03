//PROGRAM FOR FINDING DIFFERENCE  1904
#include<stdio.h>
#include<stdio.h>
int main()
{
	int num1,num2,sub,add,*p1,*p2;
	printf("enter the first number:");
	scanf("%d",&num1);
	printf("enter the second number:");
	scanf("%d",&num2);
	p1=&num1;
	p2=&num2;
	add=*p1+*p2;
	printf("\naddition of %d and %d is %d",*p1,*p2,add);
	sub=*p1-*p2;
	printf("\ndifference of %d and %d is %d",*p1,*p2,sub);
	return 0;
}	
