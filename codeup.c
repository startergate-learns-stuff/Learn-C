#include <stdio.h>

int n, m;

int circle(int);

int main()
{
	scanf("%d%d", &n, &m);
	printf("%d\n", max(n, m));
}

int circle(int r) {
	return 3.14 * r * r;
}