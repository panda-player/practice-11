#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int jiujiu(int a)
{
	int c = 0;
	int b = 0;
	for (c=1; c <= a; c++)
	{
		for (b=1; b <= c; b++)
		{
			printf("%d*%d=%2d ", b, c, c* b);




		}
		printf("\n");
	}

	return 0;
}


int main()
{
	int i = 0;
	scanf("%d", &i);

	jiujiu(i);

	return 0;
}