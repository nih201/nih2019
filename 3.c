#include<stdio.h>
int main()
{
	int a = 2;
	int b = 1;
	int c, d;
	for (int c = 1; c <= 20; c++)
	{
		int d = a;
		int a += b;
		int b = d;
		if (c = 20)
		{
			printf("a\\b", a, b);
		}
	}
	return 0;
}