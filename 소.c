#include <stdio.h>

void main() {

	int a;

	printf("��ȣ�¾�, ����� �����ϴ� ���ڸ� �Է��Ͻʽÿ�.\n");

	scanf("%d", &a);

	if (a > 0)
	{
		for (int i = 0; i < a; i++)
		{
			printf("%d. ȣ���̴� �ٺ� ��û�� �˱� �ػ� ������ ������!\n\n", i + 1);
		}
	}
	else
	{
		for (int i = 0; i > a; i--)
		{
			printf("%d. ȣ���̴� �ٺ� ��û�� �˱� �ػ� ������ ������!\n\n", i + 1);
		}
	}
	
	while (a == 0) {

		printf("ȣ���̴� ����û��\n\n");

	}

	return 0;

}