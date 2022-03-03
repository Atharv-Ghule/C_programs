//PROGRAM FOR SWAPPING  1904
#include<stdio.h>
void swap(int*a,int*b);
int main()
{
	int m=45, n=33;
	printf("values before swap m=%d and n=%d\n",m,n);
	swap(&m,&n);
}
void swap(int *a,int *b)
{
	int tmp;
	tmp= *a;
	*a = *b;
	*b = tmp;
	printf("\n values after swap a = %d and b = %d",*a, *b);
	
}
