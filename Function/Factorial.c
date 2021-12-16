#include<stdio.h>
int fact(int);
int main()
{
	int num;
	printf("Enter a number to calculate factorial :");
	scanf("%d",&num);
	printf("%d!=  %d\n",num,fact(num));
	return 0;
}
int fact(int num)
{
	int i;
	int f=1;
	for(i=1;i<=num;i++)
	f=f*i;
	return f;
}
