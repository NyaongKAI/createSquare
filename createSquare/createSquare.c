#include <stdio.h>

int main(void)
{
	int i;
	int k;
	int width;
	int length;

	printf("���� ���� ���̰� ���� ���Դϱ�?(���� 3���� Ŀ����) ");
	scanf("%d %d", &width, &length);

	while (width <= 3 || length <= 3)
	{
		if (width > 3 && length > 3)
		{
			break;
		}
		else
		{
			printf("�ٽ�\n");
			printf("���� ���� ���̰� ���� ���Դϱ�?(���� 3���� Ŀ����) ");
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