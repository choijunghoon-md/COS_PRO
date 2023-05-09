#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int member_age[], int member_age_len, const char* transportations) {
	int answer = 0;
	int* num1= (int *)malloc(sizeof(int) * 2);
	int* num2 = (int*)malloc(sizeof(int) * 2);
	memset(num1, 0, sizeof(int) * 2);

	if (transportations == "Bus") {
		num2[0] = 15000;
		num2[1] = 40000;
	}
	else if (transportations == "Ship") {
		num2[0] = 13000;
		num2[1] = 30000;
	}
	else {
		num2[0] = 45000;
		num2[1] = 70000;
	}

	for (int i = 0; i < member_age_len; i++) {
		if (member_age[i] < 20) num1[0]++;
		else num1[1]++;
	}

	num1[0] = num1[0] * num2[0];
	num1[1] = num1[1] * num2[1];

	if (member_age_len >= 10) {
		num1[0] = (float)(num1[0] * 0.8);
		num1[1] = (float)(num1[1] * 0.9);
	}

	answer = num1[0] + num1[1];

	return answer;
}

int main() {
	int member_age1[5] = { 13,33,45,11,20 };
	int member_age1_len = 5;
	const char* transportations1 = (char*)malloc(sizeof(char)*3);
	transportations1 = "Bus";
	int ret1= solution(member_age1,member_age1_len,transportations1);

	printf("solution 함수의 변환 값은 %d 입니다.\n", ret1);

	

	int member_age2[10] = { 25,11,27,56,7,19,52,31,77,8 };
	int member_age2_len = 10;
	const char* transportations2 = (char*)malloc(sizeof(char) * 4);
	transportations2 = "Ship";
	int ret2 = solution(member_age2, member_age2_len, transportations2);

	printf("solution 함수의 변환 값은 %d 입니다.\n", ret2);


	return 0;
}