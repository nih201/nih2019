#include <stdio.h>

int main()
{
	int a, b, c;
	int num = 0;
	int num1 = 0;
	for (a = 1; a < 5; a++)
	{
		for (b = 1; b < 5; b++) 
		{
			for (c = 1; c < 5; c++)
			{
				num = 100 * a + 10 * b + c;
				if (a != b && a != c && b != c)
				{
					printf("%4d", num);
					num1++;
				}
			}
		}
	}
	printf("一共有%d个数\n", num1);
	return 0;
}