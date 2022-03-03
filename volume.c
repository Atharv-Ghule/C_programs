//PROGRAM FOR VOLUME OF CUBE & CYLINDER  1904
#include<stdio.h>
int main()
{
	float cube,hieght,rad,voc,pi=3.14;
	printf("enter the volume of cube");
	scanf("%f",&cube);
	printf("the volume of cube is : %f",cube*cube*cube);
printf("enter the hieght and rad for the volume of cylinder");
scanf("%f%f",&hieght,&rad);
voc=pi*hieght*rad*rad;
printf("The volume of cylinder is :%f%f",voc);
}
