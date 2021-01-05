#include <stdio.h>

int main(void)
{
	int i;
	int k;
	int width;
	int length;

	printf("가로 세로 길이가 각각 얼마입니까?(각각 3보다 커야함) ");
	scanf("%d %d", &width, &length);

	while (width <= 3 || length <= 3)
	{
		if (width > 3 && length > 3)
		{
			break;
		}
		else
		{
			printf("다시\n");
			printf("가로 세로 길이가 각각 얼마입니까?(각각 3보다 커야함) ");
			scanf("%d %d", &width, &length);
		}
	}

	for (i = 0; i < width; i++)
	{
		printf("*");
	}
	printf("\n");

	for (k = 0; k < length - 2; k++)
	{
		printf("*");
		for (i = 0; i < width; i++)
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
	}

	for (i = 0; i < width; i++)
	{
		printf("*");
	}
	printf("\n");
	return 0;
}