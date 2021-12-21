#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10];
	printf("Enter first string :");
	scanf("%s",&str1);
	printf("ENter second string :");
	scanf("%s",&str2);
	if(strcat(str1,str2))
	printf("\n The result string is %s",str1,str2);
	return 0;
}
