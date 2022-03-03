//PROGRAM FOR LARGE ELEMENT IN ARRAY  1904
#include<stdio.h>
#include<conio.h>
int main()
{
	int largest,size,array[10],i;
	printf("Enter your elements to store in array\n");
	scanf("%d",&size);
	printf("Now ready to enter %d numbers in array \n",size);
	for(i=0;i<size;i++)
	scanf("%d",&array[i]);
	largest=array[0];
	for(i=1;i<size;i++)
	{
		if(largest<array[i])
		largest=array[i];
	}
	printf("THE LARGEST ELEMENT IN ARRAY IS: %d\n,largest");
	return 0;
}
