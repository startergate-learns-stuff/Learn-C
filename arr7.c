#include <stdio.h>

/*int main() {
	int n[5][5] = { 0 };
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			n[i][j] = (i * 5) + (j + 1);
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			printf("%2d ", n[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
// 1
/*int main() {
	int n[5][5] = { 0 };
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			n[j][i] = (i * 5) + (j + 1);
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			printf("%2d ", n[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
// 2
/*int main() {
	int n[5][5] = { 0 }, k = 1;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < i + 1; j++)
		{
			n[i][j] = k++;
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			printf("%2d ", n[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
// 3
/*int main() {
	int n[5][5] = { 0 }, k = 1;
	for (size_t i = 0; i < 5; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			n[i][j] = k++;
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			printf("%2d ", n[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
// 4
/*int main() {
	int n[5][5] = { 0 }, k = 1;
	for (size_t i = 0; i < 5; i++)
	{
		for (int j = 4 - i; j < 5; j++)
		{
			n[i][j] = k++;
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			printf("%2d ", n[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
// 5
/*int main() {
	int n[5][5] = { 0 }, k = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 4; j >= 4 - i; j--)
		{
			n[i][j] = k++;
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			printf("%2d ", n[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
// 6
/*int main() {
	int n[5][5] = { 0 }, k = 1;
	for (int i = 0; i < 5; i++)
	{
		k = i;
		for (int j = 0; j < 5; j++)
		{
			n[i][j] = k++;
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			printf("%2d ", n[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
// 7
/*int main() {
	int n[5][5] = { 0 }, k = 1;
	for (int i = 0; i < 5; i++)
	{
		k = i + 1;
		for (int j = 0; j < 5; j++)
		{
			if (!(k % 5)) {
				n[i][j] = 5;
				k++;
				continue;
			}
			n[i][j] = k % 5;
			k++;
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			printf("%2d ", n[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
// 8
/*int main() {
	int n[5][5] = { 0 }, k = 1;
	for (int i = 0; i < 5; i++)
	{
		if (!(i % 2))
		{
			for (int j = 0; j < 5; j++)
			{
				n[i][j] = k++;
			}
		}
		else
		{
			for (int j = 4; j >= 0; j--)
			{
				n[i][j] = k++;
			}
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			printf("%2d ", n[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
// 9
/*int main() {
	int n[5][5] = { 0 }, k = 1, i;
	for (i = 0; i < 5; i++)
	{
		if (i < 3)
		{
			for (int j = 2 - (i % 4); j < 3 + i % 4; j++)
			{
				n[i][j] = k++;
			}
		}
		else
		{
			for (size_t j = i - 2; j < 4 - i % 3; j++)
			{
				n[i][j] = k++;
			}
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			printf("%2d ", n[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
// 10
/*int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	for (int i = a; i <= b; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d*%d=%d\n", i, j, i*j);
		}
	}
	return 0;
}*/
/*int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			printf("(%d, %d) ", i, j);
		}
		printf("\n");
	}
	return 0;
}*/
/*int main() {
	int n;
	char cnt = 97;
	scanf("%d", &n);
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%c ", cnt++);
		}
		printf("\n");
	}
	return 0;
}*/
/*int main() {
	int n;
	char cnt = 97;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2 - i; j++)
		{
			printf("* ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("%c ", cnt++);
		}
		printf("\n");
	}
	return 0;
}*/
/*int main() {
	int n;
	char cnt = 97;
	scanf("%d", &n);
	for (int i = n; i > 0; i--)
	{
		for (int j = 3 - i; j > 0; j--)
		{
			printf("* ");
		}
		for (int j = i; j > 0; j--)
		{
			printf("%c ", cnt++);
		}
		printf("\n");
	}
	return 0;
}*/
/*int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			printf("  ");
		}
		for (int j = 0; j <= 2 * i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}*/
/*int main() {
	int cnt1 = 2, cnt2;
	for (size_t i = 0; i < 5; i++)
	{
		cnt2 = cnt1++;
		for (size_t i = 0; i < 5; i++)
		{
			printf("%d ", cnt2 % 5 + 1);
			cnt2++;
		}
		printf("\n");
	}
	return 0;
}*/
/*int main() {
	int a[5][5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		int j = 0;
		for (; j < 2; j++)
		{
			a[i][j] = i + 1;
		}
		for (; j < 5; j++)
		{
			a[i][j] = a[i][j - 1] + a[i][j - 2];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
}*/