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
/*int main() {
	int n, i, k;
	char a[20] = "", b[20] = "";
	printf("암호화 방법 선택: ");
	scanf("%d", &n);
	getchar();
	switch (n)
	{
	case 1:
		gets(a);
		for (i = 0; a[i] != '\0'; i++)
		{
			if (a[i] >= 65 && a[i] < 91)
			{
				a[i] += 32;
			}
			printf("%c", a[i]);
			if (a[i] <= 100 && a[i] >= 97)
			{
				a[i] += 23;
			}
			else if (a[i] > 97 && a[i] <= 122)
			{
				a[i] -= 3;
			}
		}
		break;
	case 2:
		gets(b);
		for (i = 0; a[i] != '/0'; i++)
		{
			if (a[i] >= 65 && a[i] < 91)
			{
				a[i] += 32;
			}
			if (a[i] >= 120 && a[i] <= 122)
			{
				a[i] -= 23;
			}
			else if (a[i] > 97 && a[i] <= 122)
			{
				a[i] += 3;
			}
		}
		break;
	default:
		break;
	}
	puts(a);
	puts(b);
}*/
/*#include <time.h>
#include <stdlib.h>
int main() {
	int a[4], b[4];
	int cnt1 = 0, cnt2 = 0, temp;
	srand(time(0));
	A:
	for (int i = 3; i >= 0; i--)
	{
		temp = rand();
		a[3 - i] = temp % 10;
		temp /= 10;
	}
	for (int i = 0; i < 4; i++)
	{
		temp = a[i];
		for (int j = i; j < 4; j++)
		{
			if (temp == a[j] && !(i == j)) goto A;
		}
	}
	printf("%d%d%d%d", a[0], a[1], a[2], a[3]);
	while (1)
	{
		cnt1 = 0;
		cnt2 = 0;
		B:
		printf("입력: ");
		scanf("%d", &temp);
		for (int i = 3; i >= 0; i--)
		{
			b[i] = temp % 10;
			temp /= 10;
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = i + 1; j < 4; j++)
			{
				if (b[i] == b[j] && !(i == j)) goto B;
			}
		}
		for (size_t i = 0; i < 4; i++)
		{
			for (size_t j = i; j < 4; j++)
			{
				if (a[i] == b[j])
				{
					if (i == j)
					{
						cnt2++;
					}
					else
					{
						cnt1++;
					}
					break;
				}
			}
		}
		printf("%dS %dB\n", cnt2, cnt1);
		if (cnt2 == 4)
		{
			break;
		}
	}
}*/