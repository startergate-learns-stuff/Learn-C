#include <stdio.h>
#include <Windows.h>
int main() {
	int apart[15][5] = { 0 };
	int floor, room, length, day = 0;
	do
	{
		printf("%d일차입니다.\n", day);
		for (int i = 0; i < 15; i++)
		{		
			for (int j = 0; j < 5; j++)
			{
				if (apart[i][j]) printf("■ ");
				else printf("□ ");
			}
			printf("\n");
		}
		while (1)
		{
			printf("\n동행관 관리자 예약 콘솔...\n층과 호실번호를 입력하세요.\n다음날로 넘어가려면 -1를 입력하세요.\n프로그램을 종료하려면 -2를 입력하세요.\n");
			floor:
			scanf("%d", &floor);
			if (floor == -1) break;
			if (floor == -2) goto EXIT_POINT;
			if (floor < 1 || floor > 15) goto floor;
			room:
			scanf("%d", &room);
			if (room < 1 || room > 15) goto room;
			printf("기간을 입력하세요.\n");
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
						printf("%d0%d호가 퇴실했습니다.\n", i + 1, j + 1);
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
			if (apart[i][j]) printf("■ ");
			else printf("□ ");
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