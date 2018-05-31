#include <stdio.h>
#include <string.h>
int main() {
	int a, cnt = 0;
	char b[51];
	scanf("%d", &a);
	getchar();
	for (size_t i = 0; i < a; i++)
	{
		gets("%s", b);
		if (strlen(b) <= 3 || strchr(b, "tap") || strchr(b, "xocure"))
		{
			puts(b);
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}