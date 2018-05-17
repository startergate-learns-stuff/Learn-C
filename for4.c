#include <stdio.h>

/*int main() {
	int sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			sum += j;
		}
	}
	printf("%d", sum);
}*/
/*int main() {
	int i, j;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (4 * i + 2 * j == 32 && i + j == 10)
			{
				printf("%d %d", i, j);
				goto A;
			}
		}
	}
	A:
	return 0;
}*/
int main() {
	int a, b, c;
	for (a = 1; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 1; c < 10; c++)
			{
				if ((a * 100 + b * 10 + c) - (a * 10 + b) == (c * 10 + c))
				{
					printf("%d %d %d", a, b, c);
				}
			}
		}
	}
	return 0;
}