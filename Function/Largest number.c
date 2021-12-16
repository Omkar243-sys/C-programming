#include<stdio.h>
int large(int,int);
int main()
{
	int x,y;
	printf("\nEnter two values :");
	scanf("%d%d",&x,&y);
	printf("Largest Num is %d",x,y,largest(x,y));
	return 0;
	
}
int largest(int x,int y)
{
	if(x>y)
	    return x;
	else
    	return y;
}
