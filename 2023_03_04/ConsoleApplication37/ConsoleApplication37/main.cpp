#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void num1(void);
void num2(void);
void num3(void);
void num4(void);
void num5(void);
void num6(void);
void num7(void);

int main(void){

	//num1();
	//num2();
	//num3();
	//num4();
	//num5();
	//num6();
	//num7();

	return 1;
}

void num1(void){

	char *s1 = "Hello";
	char s2[10] = "Hello";

	printf("%d\n", strlen(s1));
	printf("%d\n", strlen(s2));
}

void num2(void){

	char *s1 = "Hello";
	char s2[10] = "Hello";

	int ret = strcmp(s1, s2);

	printf("%d\n", ret);
}

void num3(void){

	printf("%d\n", strcmp("aaa", "aaa"));
	printf("%d\n", strcmp("aab", "aaa"));
	printf("%d\n", strcmp("aab", "aac"));

}

void num4(void){

	char s1[20];
	char s2[20];

	printf("���ڿ� �� ���� �Է��ϼ���: ");
	scanf("%s %s", s1, s2);

	int ret = strcmp(s1, s2);

	switch (ret){
	case 0:
		printf("�� ���ڿ��� ����\n");
		break;
	case 1:
		printf("%s���� %s�� ŭ\n", s2, s1);
		break;
	case -1:
		printf("%s���� %s�� ŭ\n", s1, s2);
		break;
	}
}

void num5(void){//������ �����Ͻ� �ڵ�

	char s1[20];
	char s2[20];

	printf("���ڿ� �� ���� �Է��ϼ���: ");
	scanf("%s %s", s1, s2);

	int ret = strcmp(s1, s2);

	printf("��ȯ��: %d\n", ret);

	if (ret == 0){
		printf("�� ���ڿ��� ����\n");
	}
	else if (ret > 0){
		printf("%s���� %s�� ŭ\n", s2, s1);
	}
	else if (ret < 0){
		printf("%s���� %s�� ŭ\n", s1, s2);
	}
}

void num6(void){

	char *s1 = "C Language";
	printf("%d\n", strlen(s1));
}

void num7(void){
	char *s1 = "Pachelbel Canon";
	char *s2 = "Pachelbel Canon";

	int ret = strcmp(s1, s2);

	printf("%d", ret);
}