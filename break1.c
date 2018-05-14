#include <stdio.h>

/*int main() {
	int a = 3;
	while (1)
	{
		if (a == 0) goto A;
		printf("%d", a--);
	}
	A:
	printf("Á¾·á");
}*/

/*int main() {
	int s = 0, i = 1;
	for (;;) {
		s = s + i;
		i++;
		if (i > 10) goto A;
	}
	A:
	printf("%d", s);
	return 0;
}*/

/*int main() {
	for (int i = 1; i <= 100; i++) {
		if (!(i % 3)) {
			continue;
		}
		printf("%d\n", i);
	}
}*/

/*int main() {
	int cnt = 0;
	for (int i = 1; i <= 100; i++) {
		cnt++;
		if (!((i / 10) % 3) && i / 10) {
			if (!((i / 10) % 3))
			{
				printf("*");
			}
			if (!((i % 10) % 3) && i % 10)
			{
				printf("*");
			}
			printf(" ");
			goto A;
		}
		else
		{
			if (!((i % 10) % 3) && i % 10)
			{
				printf("* ");
				goto A;
			}
		}
		printf("%d ", i);
		A:
		if (!(cnt % 10)) printf("\n");
	}
	return 0;
}*/
