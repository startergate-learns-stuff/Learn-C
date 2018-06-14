#include <stdio.h>

/*int main() {
	int n, sum = 0;
	scanf("%d", &n);
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	printf("%d", sum);
}*/
// 1번
/*int main() {
	int n, sum = 0;
	do
	{
		scanf("%d", &n);
		sum += n;
	} while (n != 0);
	printf("%d", sum);
}*/
// 2번
/*int main() {
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j <= i; j++)
		{
			printf("%c", j + 97);
		}
		for (size_t j = 0; j < 4 - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/
// 3번
/*int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = n - i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}*/
// 4번
/*#include <stdlib.h>
int main() {
	char a[100] = "";
	int n;
	gets(a);
	n = strlen(a);
	for (int i = n - 1; i >= 0; i--)
	{
		printf("%c", a[i]);
	}
}*/
// 5번
/*int main() {
	char a[20] = "", b[20] = "";
	gets(a);
	puts(a);
	strcpy(b, a);
	puts(b);
	return 0;
}*/
// 6번
/*int main() {
	int a[10][10] = { 0 }, k = 1, n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[j][i] = k++;
		}
	}
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
}*/
// 7번
/*int main() {
	int a[5][5] = { 1 };
	for (int i = 1; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				a[i][j] = a[i - 1][j];
			}
			else
			{
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}*/
// 8번