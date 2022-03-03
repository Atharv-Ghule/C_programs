//PROGRAM FOR 'N' NO. STORED IN ASCENDING & DESCENDING ORDER  1904
#include <stdio.h>
int main()
{
int ar[100];
int size,i,j,temp;
printf("\n\nEnter size of array\n");
scanf("%d",&size);
printf("\n\nEnter element in array:\n");
for(i=0;i<size;i++)
{
scanf("%d",&ar[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(ar[j]<ar[i])
{
temp=ar[i];
ar[i]=ar[j];
ar[j]=temp;
}
}
}
printf("\nElements of array stored in ascending order\n\n");
for(i=0;i<size;i++)
{
printf("%d\t",ar[i]);
}
return 0;
}
