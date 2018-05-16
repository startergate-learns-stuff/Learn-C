#include <stdio.h>

/*int main() {
	int a, b, gcm, temp, c;
	scanf("%d %d", &a, &b);
	c = a * b;
	if (a < b)
	{
		temp = b;
		b = a;
		a = temp;
	}
	while (a % b)
	{
		temp = a;
		a = b;
		b = temp % b;
	}
	gcm = b;
	printf("%d\n%d\n", gcm, c/gcm);
	return 0;
}*/
/*int main() {
int n, sum = 0;
scanf("%d", &n);
while (n)
{
sum += n % 10;
n = n / 10;
}
printf("%d", sum);
}*/
/*int main() {
	char a = 0;
	do
	{
		scanf("%c", &a);
		if (a == '\n') break;
		else if (a - 3 >= 65 && a - 3 <= 90) printf("%c", a - 3);
		else if (a - 3 >= 62) printf("%c", a - 3 + 26);
		else printf("%c", a);
	} while (1);
	do
	{
		scanf("%c", &a);
		if (a == '\n') break;
		else if (a + 3 >= 65 && a + 3 <= 90) printf("%c", a + 3);
		else if (a + 3 <= 93) printf("%c", a + 3 - 26);
		else printf("%c", a);
	} while (1);
}*/
/*int main() {
	int a, i;
	scanf("%d", &a);
	for (i = 0; a != 0; i++)
	{
		a = a / 10;
	}
	printf("%d", i);
	return 0;
}*/