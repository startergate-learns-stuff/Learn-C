#include <stdio.h>

/*int main() {
	int s[8] = { 0,0,1,0,1,1,0,0 };
	int r[8] = { 1,0,1,1,1,1,0,0 };
	int i;
	for (i = 0; i < 8; i++)
	{
		if (s[i] != r[i]) printf("ERROR: %dbit ", 8 - i);
	}
	return 0;
}*/
/*int main() {
	int fibo[10] = { 1, 1 };
	for (int i = 2; i < 10; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%2d ", fibo[i]);
	}
	return 0;
}*/
/*int main() {
	int n;
	int arr[10] = { 0 };
	scanf("%d", &n);
	int i = 0;
	while (n)
	{
		arr[i] = n % 2;
		n /= 2;
		i++;
	}
	for (int j = 9; j >= 0; j--)
	{
		printf("%d", arr[j]);
		if (!(j % 4)) printf(" ");
	}
	printf("\n");
	return 0;
}*/
/*#include <stdlib.h>
#include <time.h>
#include <Windows.h>
int main() {
	int k, n, r;
	srand(time(0));
	k = rand() % 100;
	r = rand() % 10;
	printf("%d번 안에 맞추세요\n", r);
	for (int i = 0; i < r; i++)
	{
		scanf("%d", &n);
		if (n > k) printf("DOWN\n");
		else if (n < k) printf("UP\n");
		else
		{
			printf("CORRECT\n");
			goto A;
		}
	}
	printf("YOU FAILED!\a\n");
	for (int i = 0; i < 10; i++)
	{
		printf("\a");
		Sleep(200);
	}
	A:
	return 0;
}*/
/*int main() {
	int m[3] = { 3,1,4 };
	for (int i = 0; i < 3; i++)
	{
		printf("m[%d] = %d ", i, m[i]);
		for (int j = 0; j < m[i]; j++) printf("*");
		printf("\n");
	}
	return 0;
}*/
/*#include <stdlib.h>
#include <time.h>
int main() {
	int m[80];
	int cnt[10] = { 0 };
	srand(time(0));
	for (int i = 0; i < 80; i++)
	{
		m[i] = rand() % 10;
		cnt[m[i]]++;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d: %2d번 ", i, cnt[i]);
		for (int j = 0; j < cnt[i]; j++)printf("★");
		printf("\n");
	}
}*/