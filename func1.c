#include <stdio.h>
/*#include <string.h>

int main() {
	char a[100];
	gets(a);
	printf("%d", strlen(a));
	return 0;
}*/

/*int main() {
	int n;
	scanf("%d", &n);
	if (n < 0) n *= -1;
	printf("%d", n);
}*/

/*int main() {
	int n;
	scanf("%d", &n);
	n < 0 ? n *= -1 : n;
	printf("%d", n);
}*/

/*#include <math.h>
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", abs(n));
}*/

/*void liner();
void square(int n);
int input();
double tri(int w, int h);

int main() {
	//liner();
	
	//int a;
	//scanf("%d", &a);
	//square(a);

	//int a = input();
	//if (!(a % 2)) printf("짝\n");
	//else printf("홀\n");

	int a, b;
	scanf("%d %d", &a, &b);
	printf("%lf", tri(a, b));
	return 0;
}

void liner() {
	for (size_t i = 0; i < 20; i++)
	{
		printf("-");
	}
	printf("\n");
	printf("hello\n");
	for (size_t i = 0; i < 20; i++)
	{
		printf("-");
	}
	printf("\n");
}
// 자료형 X, 매개변수 X

void square(int n) {
	printf("%d", n * n);
}
// 자료형 X, 매개변수 O

int input() {
	int n;
	scanf("%d", &n);
	return n;
}
// 자료형 O, 매개변수 X

double tri(int w, int h) {
	return w * h / 2.0;
}
// 자료형 O, 매개변수 O*/