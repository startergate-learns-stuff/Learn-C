#include <stdio.h>

/*int main() {
	char a[][10] = { "hello","world" };
	for (size_t i = 0; i < 2; i++)
	{
		printf("%s\n", a[i]);
	}
}*/
/*int main() {
	char a[3][10];
	for (size_t i = 0; i < 3; i++)
	{
		gets(a[i]);
	}
	for (size_t i = 0; i < 3; i++)
	{
		puts(a[i]);
	}
	return 0;
}*/
/*#include <string.h>

int main() {
	char email[3][30];
	int k[3], pos[3], id[3], j;
	for (int i = 0; i < 3; i++)
	{
		gets(email[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		puts(email[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		k[i] = strlen(email[i]);
		printf("%d\n", k[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		for (j = 0; j < 30; j++)
		{
			if (email[i][j] == '@')
			{
				pos[i] = j;
				break;
			}
		}
		for (j++; j < 30; j++)
		{
			if (email[i][j] == '\0')
			{
				id[i] = j - pos[i] - 1;
				break;
			}
		}
		printf("%d\n", pos[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", id[i]);
	}
}*/