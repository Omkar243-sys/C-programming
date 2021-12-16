#include<stdio.h>
int evenodd(int);
int main()
{
	int n,num,res;
	printf("\nEnter any number :");
	scanf("%d",&num);
	res=evenodd(num);
	if(res==1)
	printf("\nThe number %d is even",num);
	if(res==0)
	printf("\nThe number %d is odd",num);
	return 0;
}
int evenodd(int n)
{
	if(n%2==0)
	return 1;
	else
	return 0;
}
