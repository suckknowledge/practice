#define _CRT_SECURE_NO_WARNINGS 1//打印菱形
#include<stdio.h>
int main() 
{
	int y = 0;
	scanf("%d", &y);
	int i = 0;
	int j = 0;
	//打印上一半
	for (i = 0;i < y;i++)
	{
		for (j = 0;j < y - i - 1;j++)
		{
			printf(" ");
		}
		for (j = 0;j < 1 + i * 2;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下一半
	for (i = 0;i <= y;i++)
	{
		for (j = 0;j < i+1;j++)
		{
			printf(" ");
		}
		for(j=0;j<2*(y-1-i)-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}