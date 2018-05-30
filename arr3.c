#include <stdio.h>

/*int main() {
	int n[4] = { 4,1,3,2 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = i; j < 3 - i; j++)
		{
			if (n[j] > n[j + 1])
			{
				int temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", n[i]);
	}
	return 0;
}*/
/*int main() {
	int m[4] = { 4,3,2,1 };
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (m[i] > m[j]) 
			{
				int temp = m[j];
				m[j] = m[i];
				m[i] = temp;
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", m[i]);
	}
	return 0;
}*/
// 선택 정렬
/*int main() {
	int m[4] = { 3,4,2,1 };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (m[j] > m[j + 1])
			{
				int temp = m[j];
				m[j] = m[j + 1];
				m[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", m[i]);
	}
	return 0;
}*/
// 버블 정렬