//To find the Smallest number
#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,n5,max;
	printf("Enter the five numbers");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	max=n1;
	if(max>n2)
	max=n2;
	if(max>n3)
	max=n3;
	if(max>n4)
	max=n4;
	if(max>n5)
	max=n5;
	printf("The Smallest element is %d",max);
	return 0;
}
