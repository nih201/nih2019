#include<stdio.h>
int main()
{
	int f = 0;
	scanf_s("%d", &f);
	int a = f / 10000;
	int b = f % 10000 / 1000;
	int c = f % 10000 % 1000 / 100;
	int d = f % 10000 % 1000 % 100 / 10;
	int e = f % 10000 % 1000 % 100 % 10;
	if (f / 10000 > 1)
	{
		printf("���������λ��\n");
	}
	if (f / 1000>1&&f/1000<10)
	{
		printf("���������λ��\n");
	}
	if (f / 100 > 1 && f / 100 < 10)
	{
		printf("���������λ��\n");
	}
	if (f / 10 > 1 && f / 10 < 10)
	{
		printf("������Ƕ�λ��\n");
	}
	if (f / 1 > 1 && f / 1 < 10)
	{
		printf("�������һλ��\n");
	}
	printf("%d%d%d%d%d", e, d, c, b, a);
	return 0;
}