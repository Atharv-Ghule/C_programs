//PROGRAM FOR SWAPPING OF TWO NUMBERS  1904
#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers");
    scanf("%d%d",&num1,&num2); //num=24 num2=10
    printf("The numbers are:%d  %d",num1,num2);
    num1=num1+num2; //num1=34
    num2=num1-num2; //num2=24
    num1=num1-num2; //num1=10
    printf("\nThe swapped values are: %d %d",num1,num2);
    return 0;
}




