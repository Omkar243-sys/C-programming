#include<stdio.h>
#include<math.h>
int main()
{
	double n,s;
	printf("Enter the value :");
	scanf("%lf",&n);
	s=sqrt(n);
	printf("The square root of %.0lf is %.2lf",s);
	return 0;	
}
