#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	printf("Enter any name :");
	scanf("%s",str);
	printf("\nThe name is lower case is %s",strlwr(str));
	printf("\nThe name in upper case is %s",strupr(str));
	return 0;
}
