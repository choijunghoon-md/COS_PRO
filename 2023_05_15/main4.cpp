#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int func_a(int number) {
	int answer = 0;
	answer = number / 100;
	return answer;
}
int func_b(int number) {
	int answer = 0;
	answer = (number % 100 - number % 10)/10;
	return answer;
}
int func_c(int number) {
	int answer = 0;
	answer = number % 10;
	return answer;
}


int solution(int number) {
	int answer = 0;
	int count = 0;
	int num[3] = { 0, };
	num[0] = func_a(number);
	num[1] = func_b(number);
	num[2] = func_c(number);
	for (int i = 0; i < 3; i++) {
		if (num[i] != 0) { 
			answer += num[i] * pow(10, count);
			count++;
		}
	}
	return answer;
}

int main() {
	int number1 = 120;
	int ret1 = solution(number1);

	printf("solution 함수의 변환 값은 %d 입니다.\n", ret1);

	int number2 = 23;
	int ret2 = solution(number2);

	printf("solution 함수의 변환 값은 %d 입니다.\n", ret2);

	return 0;
}