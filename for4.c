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
/*int main() {
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
}*/
/*int main() {
	int length, whatif, i, j;
	scanf("%d", &length); // 몇 단 까지 계산할까?
	scanf("%d", &whatif); // whatif 변수의 배수는 출력하지 않음
	for (i = 1; i <= length; i++)
	{
		for (int j = 1; j <= length; j++)
		{
			if (!((i * j) % whatif)) continue; //배수면 continue
			printf("%d*%d=%d\n", i, j, i * j);
		}
	}
	return 0;
}*/