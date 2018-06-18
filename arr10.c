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
int main() {
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
}