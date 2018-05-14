#include <stdio.h>
#include <windows.h>

/*void main() {
	char p;
	int cnt = 0;
	do
	{
		printf("ï¿½ï¿½ï¿½Ð¹ï¿½È£ ï¿½Ô·ï¿½: ");
		scanf("%c", &p);
		getchar();
		cnt++;
	} while (p != 'q' && p != 'Q' && cnt != 3);
	if (p == 'q' || p == 'Q')
	{
		printf("Login!\n");
	}
	else
	{
		printf("Fail\n");
	}
}*/

/*int main() {
	int a, input, input2;
	int i = 0;
	do
	{
		printf("ºñ¹Ð¹øÈ£ ÀÔ·Â: ");
		scanf("%d", &input);
		printf("´Ù½Ã ÀÔ·Â: ");
		scanf("%d", &input2);
	} while (input != input2);
	for (int i = 0; i < 100; i++)
	{
		printf("\n");
	}
	while (1)
	{
		for (int j = 1; j <= 5; j++)
		{
			printf("ÀÔ·Â: ");
			scanf("%d", &a);
			if (a == input) {
				printf("¹® ¿­¸²!\n");
				goto A;
			}
			else
			{
				printf("ºñ¹Ð¹øÈ£ Æ²¸²\a\n");
			}
		}
		Sleep(300000);
	}
	A:
	return 0;
}*/

/*int main() {
	char a;
	int cnt = 0;
	do
	{
		scanf("%c", &a);
		getchar();
		printf("%c\n", a);
		cnt++;
	} while (a != 81 && a != 113);
	printf("%d°³", cnt - 1);
	return 0;
}*/

/*int main() {
	int cnt, n, i, sum = 0;
	printf("°ú¸ñ ¼ö ÀÔ·Â: ");
	scanf("%d", &cnt);
	printf("Á¡¼ö ÀÔ·Â: ");
	for (i = 0; i < cnt; i++)
	{
		scanf("%d", &n);
		getchar();
		sum += n;
	}
	printf("ÃÑÁ¡: %d\n", sum);
	printf("Æò±Õ: %.2f\n", sum / (float) cnt);
	return 0;
}*/