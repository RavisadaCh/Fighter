#include<stdio.h>
int main()
{
	int base;
	int x = 0;
	int fighter[100];
	int odd=0, even=0;

	printf("Enter int : ");
	scanf_s("%d", &base);
	printf("Choose fighters : ");
	int y = 2 * base;
	while (x < y)
	{
		scanf_s("%d", &fighter[x]);
		x++;
	}
	int i = 0;
	while (i < y)
	{
		if (fighter[i] % 2 == 0)
		{
			even++;
		}
		if (fighter[i] % 2 == 1)
		{
			odd++;
		}
		i++;
	}
	for (int j=0;j < y;j++)
	{
		if (fighter[j] % 2 == 0)
		{
			odd--;
			if (odd == 0)
			{
				printf("0\n");
				printf("%d", fighter[j]);
			}
		}
		if (fighter[j] % 2 == 1)
		{
			even--;
			if (even == 0)
			{
				printf("1\n");
				printf("%d", fighter[j]);
			}
		}
	}
	return 0;
}