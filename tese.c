#define _CRT_SECURE_NO_WARNINGS 1//��ӡ����
#include<stdio.h>
int main() 
{
	int y = 0;
	scanf("%d", &y);
	int i = 0;
	int j = 0;
	//��ӡ��һ��
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
	//��ӡ��һ��
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