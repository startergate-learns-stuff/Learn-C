#include <stdio.h>
#include <windows.h>

/*void main() {
	char p;
	int cnt = 0;
	do
	{
		printf("���й�ȣ �Է�: ");
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
		printf("��й�ȣ �Է�: ");
		scanf("%d", &input);
		printf("�ٽ� �Է�: ");
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
			printf("�Է�: ");
			scanf("%d", &a);
			if (a == input) {
				printf("�� ����!\n");
				goto A;
			}
			else
			{
				printf("��й�ȣ Ʋ��\a\n");
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
	printf("%d��", cnt - 1);
	return 0;
}*/

/*int main() {
	int cnt, n, i, sum = 0;
	printf("���� �� �Է�: ");
	scanf("%d", &cnt);
	printf("���� �Է�: ");
	for (i = 0; i < cnt; i++)
	{
		scanf("%d", &n);
		getchar();
		sum += n;
	}
	printf("����: %d\n", sum);
	printf("���: %.2f\n", sum / (float) cnt);
	return 0;
}*/