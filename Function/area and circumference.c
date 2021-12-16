#define PI 3.1452
#include<stdio.h>
int calc(float,float*,float*);	
int main()
{
	float area,circum,r;
	printf("Enter Radius :");
	scanf("%f",&r);
	calc(r,&area,&circum);
	printf("Area=%.2lf and Circumference= %.2lf",area,circum);
	return 0;
}
int calc(float r,float*area,float*circum){
	*area=PI*r*r;
	*circum=2*PI*r;
}
