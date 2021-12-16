#include<stdio.h>
int add(int,int);
int main()
{
   int a,b,res;
   printf("Enter Two values : ");
   scanf("%d%d",&a,&b);
   res=add(a,b);
   printf("The addition is = %d",res);
   return 0;
}
int add(x,y){
	int r;
	r=x+y;
	return r;
}
