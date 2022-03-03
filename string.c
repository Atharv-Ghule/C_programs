//PROGRAM FOR STRING  1904
#include<stdio.h>
#include<conio.h>
union sample
{
	int num;
	char str[10];
	float real;
};
int main()
{
	union sample s;
	printf("enter the number");
	scanf("%d",&s.num);
	printf("\n number : %d",s.num);
	printf("\nenter a string");
	scanf("%s",s.str);
	printf("\n string :%s",s.str);
	printf("\n enter a real value:");
	scanf("\n %f",&s.real);
	printf("\n real number : %f ,s.real");
	return 0;
}
