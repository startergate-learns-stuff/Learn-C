#include <stdio.h>
// 문자열 입력 연습
/*int main() {
  char a[6] = "Hello";
  //char a[6] = {"hello"};
  //char a[6] = {'h','e','l','l','o','\0'}
  //char b[10] = "";
  char c[7] = "school";
  //printf("%c", c[2]);
  //for (int i = 0; c[i] != '\0' && i < 7; i++) {
  //  scanf("%c", &c[i]);
  //}
  //scanf("%s", c);
  gets(c);
  //for (int i = 0; i < 7; i++) {
  //  printf("%c", c[i]);
  //}
  //printf("%s", c);
  puts(c);
  return 0;
}*/
/*int main() {
  char name[10];
  int age;
  char school[4];
  char addr[20];
  printf("Name: ");
  gets(name);
  printf("Age: ");
  scanf("%d", &age);
  getchar();
  printf("School: ");
  for (int i = 0; i < 4; i++) {
    scanf("%c", &school[i]);
  }
  school[3] = '\0';
  printf("Address: ");
  gets(addr);
  printf("%s.%d세.%s.%s",name,age,school,addr);
  return 0;
}*/
/*int main() {
  char id[15];
  int age;
  gets(id);
  if (id[7] == 49 || id[7] == 50) {
    age = 2018 - (1900 + (id[0] - 48) * 10 + id[1] - 48) + 1;
  } else if (id[7] == 51 || id[7] == 52) {
    age = 2018 - (2000 + (id[0] - 48) * 10 + id[1] - 48) + 1;
  }
  if (!(id[7] % 2)) {
    printf("여자\n");
  } else {
    printf("남자\n");
  }
  printf("%d", age);
  return 0;
}*/
/*int main() {
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int n;
	scanf("%d", &n);
	printf("%d", month[n-1]);
	return 0;
}*/
