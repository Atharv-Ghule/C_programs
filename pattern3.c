//PROGRAM FOR $ PATTERN  1904
#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
    for(j=5;j>=i;j--)
    {
    printf(" ");
    }
    for(k=1;k<=i;k++)
    {
    printf("$");
    }
    printf("\n");
    }
    getch();
}
