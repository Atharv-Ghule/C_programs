//PROGRAM FOR DECLARING LENGTH OF ARRAY  1904
#include <stdio.h>
#include<string.h>
int main()
{
    char name[10];
    int len;
    printf("Enter Your Name:");
    for (int i=0;i<10;i++)
    scanf("%c",&name[i]);
    len=strlen(name);
    printf("\n""The length of array name is:%d,len");
    for(int i=0;i<10;i++)
    printf("\n%c",name[i]);
    return 0;
}    