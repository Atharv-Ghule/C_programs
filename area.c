//PROGRAM FOR AREA OF CIRCLE,REACTANGLE,SQUARE  1904
#include <stdio.h>
int main()
{
float rad,areac,areasq,length,breadth,side,pi=3.14;
printf("Enter the Radius of circle");
scanf("%f",&rad);
areac= pi*rad*rad;
printf("Area of Circle= %f",areac);
printf("\n Enter values for length and breadth of rectangle:");
scanf("%f%f",&length,&breadth);
printf("\nArea of Rectangle is:%f",length*breadth);
printf("\nEnter value for side of Square");
scanf("%f",&side);
areasq=side*side;
printf("\nArea of Square is :%f",areasq);
return 0; 
}
    

