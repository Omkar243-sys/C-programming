#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10];
	printf("\nEnter first string");
	scanf("%s",%str1);
	printf("\nEnter Second string");
	scanf("%s",%str2);
	if(strcmp(str1,str2)==0)
	printf("The strings are Equal",str1);
	else
	printf("The strings are not Equal",str2);
	return 0;
}
