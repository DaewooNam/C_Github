#include<stdio.h>
void printf_str(char **ppStr,int count);

int main()
{
	char* ptr_str[3]; 
	char str1[4] = "ant";
	char str2[4] = "dog";
	char str3[4] = "cat";
	int size = sizeof(ptr_str) / sizeof(ptr_str[0]);


	ptr_str[0] = str1;
	ptr_str[1] = str2;
	ptr_str[2] = str3;


	printf_str(ptr_str,size);
	

	return 0;
}


void printf_str(char **ppStr, int count)
{
	printf("%s",ppStr[0]);

}