#include <stdio.h>
#include <string.h>
/*int main() {
	char m[20] = { '\0' };
	int count = 0;
	scanf("%s", m);
	//for (int i = 0; m[i] != '\0'; i++) count++;
	//for (int i = 100; i >= 0; i--)
	//{
	//	printf("%c", m[i]);
	//}
	//for (int i = count - 1; i >= 0; i--)
	//{
	//	printf("%c", m[i]);
	//}
	//printf("\n");
	count = strlen(m);
	printf("%d\n", count);

	return 0;
}*/
// 거꾸로 출력
/*int main() {
	char a[20] = "Multimedia", b[20] = "";
	//size_t length = strlen(a);
	//for (int i = 0; i < length; i++) b[i] = a[i];
	strcpy(b, a);
	puts(a);
	puts(b);
}*/
// a 문자열을 b 문자열로 복사
/*int main() {
	char a[100], b[100];
	//char c[20];
	//size_t i;
	gets(a);
	gets(b);
	//size_t length = strlen(a);
	//size_t lengthb = strlen(b);
	//for (i = 0; i < length; i++) c[i] = a[i];
	//for (; i < lengthb + length + 1; i++) c[i] = b[i - length]; 
	//c[i] = '\0';
	strcat(a, b);
	puts(a);
	return 0;
}*/
// 문자열 합치기
/*int main() {
	char a[10], b[10];
	gets(a);
	gets(b);
	//size_t len1 = strlen(a), len2 = strlen(b);
	//len1 = (len1 > len2) ? len1 : len2;
	//for (int i = 0; i < len1; i++)
	//{
	//	if (a[i] < b[i])
	//	{
	//		printf("%s %s", a, b);
	//		break;
	//	}
	//	if (a[i] > b[i])
	//	{
	//		printf("%s %s", b, a);
	//		break;
	//	}
	//}
	int k = strcmp(a, b);
	if (k < 0) printf("%s %s", a, b);
	else if (k > 0) printf("%s %s", b, a);
	else printf("%s", a);
	return 0;
}*/
// 문자열 비교
/*int main() {
	char a[20], b[20];
	gets(a);
	gets(b);
	if (strlen(a) > strlen(b)) printf("%s", a);
	else if (strlen(a) < strlen(b)) printf("%s", b);
	return 0;
}*/
// 시험