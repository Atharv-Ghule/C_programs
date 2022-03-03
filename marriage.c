//PROGRAM FOR ELIGIBLITY FOR MARRIAGE  1904
#include <stdio.h>
int main ()
{
    char gen;
    int age;
    printf("Enter your Gender");
    scanf("%c",&gen);
    printf("Enter your Age");
    scanf("%d",&age);
    if(gen=='M')
    {
        if(age>=21)
        {
        printf("Eligible for Marriage""\n");
    }
    else
    {
        printf("MALE NOT ELIGIBLE FOR MARRIAGE""\n");
    }
 }
    else
    {
    if(gen=='F')
    {
        if(age>=18)
        {
        printf("Eligible for Marriage""\n");
        }
        else
        {
        printf("FEMALE NOT ELIGIBLE FOR MARRIAGE""\n");
    }
    }
    }
    return 0;
    }
   