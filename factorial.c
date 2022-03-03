//PROGRAM FOR FACTORIAL  1904
#include <stdio.h>
long int multiplyNumbers(int n);

void main()
{
    int n;
    printf("Enter a postive integer:");
    scanf("%d", &n);
    printf("Factorial of%d = %ld", n,multiplyNumbers(n));
    
}
long int multiplyNumbers(int n)
{
    if(n >=1)
    return n*multiplyNumbers(n-1);
    else
    return 1;
}