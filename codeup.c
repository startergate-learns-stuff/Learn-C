#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (!(b % a))
	{
		printf("%d*%d=%d", a, b / a, b);
	}
	else if (!(a % b))
	{
		printf("%d*%d=%d", b, a / b, a);
	}
	else
	{
		printf("none");
	}
	return 0;
}
