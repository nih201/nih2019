#include<stdio.h>

int main()
{
	int i, j;
	char ch;
	scanf_s("%c", &ch);
	int a = 1;
	int b = 1;
	char apt[6][6] = {
	{ '#', '#', '#', '#', '#', '#'},
	{ '#', 'R', ' ', '#', ' ', ' '},
	{ '#', ' ', '#', '#', ' ', '#'},
	{ '#', ' ', '#', '#', ' ', '#'},
	{ '#', ' ', ' ', ' ', ' ', '#'},
	{ '#', '#', '#', '#', '#', '#'},
	};
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%c", apt[i][j]);
		}
		printf("\n");
	}
		printf("输入w,a,s,d控制小人走出迷宫\n");
		switch (ch)
		{
		case'w': if (apt[a - 1][b] != '#')
		{
			apt[a][b] = ' ';
			apt[a - 1][b] = 'R';
			a--;
		}break;
		case's': if (apt[a + 1][b] != '#')
		{
			apt[a][b] = ' ';
			apt[a + 1][b] = 'R';
			a++;
		}break;
		case'a': if (apt[a][b - 1] != '#')
		{
			apt[a][b] = ' ';
			apt[a][b - 1] = 'R';
			b--;
		}break;
		case'd': if (apt[a][b + 1] != '#')
		{
			apt[a][b] = ' ';
			apt[a][b + 1] = 'R';
			b++;
		}break;
			for (int i = 0; i < 6; i++) {
				for (int j = 0; j < 6; j++) {
					printf("%c", apt[i][j]);
				}
				printf("\n");
			}
		return 0;
}