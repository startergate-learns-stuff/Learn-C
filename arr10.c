#include <stdio.h>

/*int main() {
	char planet[4][10] = { "mars", "vinus","earth","mercury" };
	long long distance[4] = { 228000000, 150000000, 108000000, 58000000 };
	float time[4];
	for (int i = 0; i < 4; i++)
	{
		time[i] = distance[i] / 300000.0 / 60.0;
		printf("%s: %.0f분\n", planet[i], time[i]);
	}
	return 0;
}*/
/*int main() {
	int n, k = 50000, count, sw = 0;
	scanf("%d", &n);
	while (n)
	{
		count = n / k;
		n %= k;
		printf("%d원: %d장\n", k, count);
		switch (sw % 2)
		{
		case 0:
			k /= 5;
			break;
		case 1:
			k /= 2;
			break;
		}
		sw++;
	}
	return 0;
}*/
/*int main() {
	int n, k[10] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10, 5, 1 }, count, sw = 0;
	scanf("%d", &n);
	for (size_t i = 0; i < 10; i++)
	{
		count = n / k[i];
		n %= k[i];
		printf("%d원: %d장\n", k[i], count);
	}
	return 0;
}*/
/*int main() {
	for (int i = 3; i <= 10000; i++)
	{
		int sum = 0;
		for (int j = 1; j < i; j++)
		{
			if (!(i % j))
			{
				sum += j;
			}
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
}*/
/*#include <string.h>
int main() {
	char f[][5][10] = { { "apple","orange","banana","peach","grape" }, { "사과", "오렌지", "바나나", "복숭아", "포도"} };
	int cnt = 0;
	for (size_t i = 0; i < 4; i++)
	{
		size_t length = strlen(f[i]);
		for (size_t j = 0; j < length; j++)
		{
			if (f[i][j] == (char) 'n') cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}*/
/*int main() {\
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			printf("%3d", i * 5 + j + 1);
		}
		printf("\n");
	}
}*/
/*int main() {
	int a[5][5] = { 0 }, cnt = 1;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			a[j][i] = cnt++;
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
/*int main() {
	int a[5][5] = { 0 }, cnt = 1;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j <= i; j++)
		{
			a[i][j] = cnt++;
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
/*int main() {
	int a[5][5] = { 0 }, cnt = 1;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 4 - i; j < 5; j++)
		{
			a[i][j] = cnt++;
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
/*int main() {
	int n;
	scanf("%d", &n);
	printf("%.1f\n", n * 1.609);
	return 0;
}*/
/*int main() {
	int n;
	scanf("%d", &n);
	printf("%.2f", n * 0.3205);
}*/
/*int main() {
	for (size_t i = 2; i < 101; i++)
	{
		int sum = 0;
		for (size_t j = 1; j < i; j++)
		{
			if (!(i % j)) sum += j;
		}
		if (i == sum) printf("%d\n", sum);
	}
	return 0;
}*/
/*int main() {
	int max = 0, min = 100, sum = 0, n, m;
	scanf("%d", &n);
	for (size_t i = 0; i < n; i++)
	{
		scanf("%d", &m);
		if (max < m) max = m;
		if (min > m) min = m;
		sum += m;
	}
	printf("%d, %lf", sum - max - min, (sum - max - min) / (double) (n - 2));
	return 0;
}*/

int main()
{
	char c[100];
	printf("암호를 대라.\n");
	scanf("%s", c);
	//for (int i = 0; c[i] == '/0'; i++) {
	//	if(c[i]==호)
	//}
	printf("%c", c[0]);
}