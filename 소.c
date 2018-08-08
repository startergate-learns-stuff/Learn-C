#include <stdio.h>

void main() {

	int a;

	printf("최호승씨, 당신이 좋아하는 숫자를 입력하십시오.\n");

	scanf("%d", &a);

	if (a > 0)
	{
		for (int i = 0; i < a; i++)
		{
			printf("%d. 호승이는 바보 멍청이 똥깨 해삼 말미잘 떡볶이!\n\n", i + 1);
		}
	}
	else
	{
		for (int i = 0; i > a; i--)
		{
			printf("%d. 호승이는 바보 멍청이 똥깨 해삼 말미잘 떡볶이!\n\n", i + 1);
		}
	}
	
	while (a == 0) {

		printf("호승이는 떵멍청이\n\n");

	}

	return 0;

}