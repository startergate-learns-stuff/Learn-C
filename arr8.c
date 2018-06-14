#include <stdio.h>
#include <string.h>

/*int main() {
	char a[10] = { 0 };
	int sum = 0, temp = 1, temp1;
	scanf("%s", a);
	temp = strlen(a);
	temp1 = temp;
	for (int i = 0; i < temp; i++)
	{
		int carry = 1;
		for (int j = 0; j < temp1 - 1; j++)
		{
			carry *= 2;
		}
		sum += (a[i] - 48) * carry;
		temp1--;
	}
	printf("%d", sum);
}*/
/*int main() {
	int jum[10] = { 98, 72, 65, 88, 100, 26, 45, 38, 92, 77 }, rank[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (jum[i] <= jum[j])
			{
				rank[i]++;
			}
		}
	}
	printf("번호: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%4d ", i + 1);
	}
	printf("\n점수: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%4d ", jum[i]);
	}
	printf("\n석차: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%4d ", rank[i]);
	}
	printf("\n");
	return 0;
}*/
/*int main() {
	char email[30] = "", id[30] = "", site[20] = "";
	int i;
	gets(email);
	printf("%d\n", strlen(email));
	for (i = 0; email[i] != '@'; i++)
	{
		id[i] = email[i];
	}
	printf("%d\n", i++);
	puts(id);
	for (int j = 0; j < strlen(email); j++)
	{
		site[j] = email[i++];
	}
	puts(site);

	return 0;
}*/