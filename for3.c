#include <stdio.h>

int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i <= n / 2)
		{
			for (j = 1; j <= i; j++) printf("* ");
		}
		else
		{
			for (j = n - i; j >= 0; j--) printf("* ");
		}
		printf("\n");
	}
	return 0;
}
/*int main() {
	int i, n, cnt = 0;
	scanf("%d", &n);
	for (i = 0; i <= n; i++) {
		cnt++;
		if (!(i % 10)) continue;
		if (!((i / 10) % 3) && i / 10) {
			if (!((i / 10) % 3)) printf("X");
			if (!((i % 10) % 3) && i % 10) printf("X");
			printf(" ");
			continue;
		}
		else
		{
			if (!((i % 10) % 3) && i % 10)
			{
				printf("X ");
				continue;
			}
		}
		printf("%d ", i);
	}
	return 0;
}*/