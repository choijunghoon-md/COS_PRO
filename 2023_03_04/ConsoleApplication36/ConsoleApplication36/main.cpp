#include <stdio.h>
#include <stdlib.h>

void num1(void);
void num2(void);
void num3(void);
void num4(void);
void num5(void);

int main(void){

	//num1();
	//num2();
	//num3();
	//num4();
	//num5();

	return 1;
}

void num1(void){
	char s1[10];

	printf("���ڿ��� �Է��Ͻÿ�: ");
	scanf("%s", s1);

	printf("%s\n", s1);
}

void num2(void){
	char s1[10];

	printf("���ڿ��� �Է��Ͻÿ�: ");
	scanf("%[^\n]s", s1);

	printf("%s\n", s1);
}

void num3(){
	char *s1 = "Hello";

	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", s1);

	printf("%s\n", s1);
}

void num4(void){

	char *s1;
	s1 = (char*)malloc(sizeof(char)* 10);

	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", s1);

	printf("%s\n", s1);

	free(s1);
}

void num5(void){
	char s1[10];
	char s2[10];

	printf("���ڿ��� �Է��Ͻÿ�: ");
	scanf("%s %s", s1, s2);

	printf("%s\n", s1);
	printf("%s\n", s2);
}