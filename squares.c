//PROGRAM FOR FINDING SQUARES 1904
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,t=0,r,q;
printf("Enter the number to be tested:");
scanf("%d",&n);
q=n;
do
{
r=q%10;
t=t+pow(r,2);
q=q/10;
}
while(q%10!=0);
printf("%d",t);
getch();
}