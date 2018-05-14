#include <stdio.h>

/*void main() {
	int n, a, s = 0, max = 0, min = 4000, max2 = 0, min2 = 4000;
	printf("입력: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		printf("%d\n", a);
		s += a;
		if (a % 2)
		{
			if (a > max)
			{
				max = a;
			}
			if (a < min)
			{
				min = a;
			}
		}
		else
		{
			if (a > max2)
			{
				max2 = a;
			}
			if (a < min2)
			{
				min2 = a;
			}
		}
	}
	printf("합계: %d\n홀수 최대치: %d\n홀수 최소치: %d\n짝수 최대치: %d\n짝수 최소치: %d\n", s, max, min, max2, min2);
}*/
/*void main() {
	int n, s = 1, def;
	printf("입력: ");
	scanf("%d", &n);
	for (def = n; n > 0; n--)
	{
		s *= n;
		printf("%d * ", n);
	}
	printf("\b\b = %d\n", s);
}*/
/*void main() {
	int n, k, cnt = 0;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= k; i++)
	{
		printf("%5d", n * i);
		cnt++;
		if (!(cnt % 10))
		{
			printf("\n");
		}
	}
	printf("\n");
	printf("개수는 %d\n", cnt);
}*/
/*void main() {
	int a, m, d, n;
	scanf("%d %d %d %d", &a, &m, &d, &n);
	for (int i = 1; i < n; i++)
	{
			a = a * m + d;
	}
	printf("%d", a);
}*/