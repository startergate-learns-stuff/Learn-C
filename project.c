#include <stdio.h>
#include <Windows.h>
int main() {
	int apart[15][5] = { 0 };
	int floor, room, length, day = 0;
	do
	{
		printf("%d�����Դϴ�.\n", day);
		for (int i = 0; i < 15; i++)
		{		
			for (int j = 0; j < 5; j++)
			{
				if (apart[i][j]) printf("�� ");
				else printf("�� ");
			}
			printf("\n");
		}
		while (1)
		{
			printf("\n����� ������ ���� �ܼ�...\n���� ȣ�ǹ�ȣ�� �Է��ϼ���.\n�������� �Ѿ���� -1�� �Է��ϼ���.\n���α׷��� �����Ϸ��� -2�� �Է��ϼ���.\n");
			floor:
			scanf("%d", &floor);
			if (floor == -1) break;
			if (floor == -2) goto EXIT_POINT;
			if (floor < 1 || floor > 15) goto floor;
			room:
			scanf("%d", &room);
			if (room < 1 || room > 15) goto room;
			printf("�Ⱓ�� �Է��ϼ���.\n");
			scanf("%d", &length);
			apart[floor-1][room-1] = length;
		}
		day++;
		system("cls");
		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (apart[i][j]) {
					apart[i][j]--;
					if (!apart[i][j])
					{
						printf("%d0%dȣ�� ����߽��ϴ�.\n", i + 1, j + 1);
					}
				}
			}
		}
		Sleep(3000);
		system("cls");
	} while (1);
EXIT_POINT:
	system("cls");
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (apart[i][j]) printf("�� ");
			else printf("�� ");
		}
		printf("\n");
	}
	printf("GOODBYE!//////////////////////////////////\n");
	printf("//////////////////////////////////////////\n");
	printf("//////////////////////////////////////////\n");
	printf("//////////////////////////////////////////\n");
	printf("//////////////////////////////////////////\n");
	printf("///////////////////////////////////////GSM\n");
}