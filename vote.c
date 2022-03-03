//PROGRAM FOR VOTING ELIGIBLITY  1904
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Eligible To Vote");
    }
    else
    {
        printf("Not Elgible To Vote");
    }    
    return 0;
}    