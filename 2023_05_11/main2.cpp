#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int speed, int cars[], int cars_len) {
	int answer = 0;

	for (int i = 0; i < cars_len; i++) {
		if (cars[i] >= (float)(speed * 1.3)) answer += 7;
		else if (cars[i] >= (float)(speed * 1.2) && cars[i] < (float)(speed * 1.3)) answer += 5;
		else if (cars[i] >= (float)(speed * 1.1) && cars[i] < (float)(speed * 1.2)) answer += 3;
	}

	return answer;
}

int main() {
	int speed = 100;
	int cars[] = { 110,98,125,148,120,112,89 };
	int cars_len = 7;
	int ret = solution(speed, cars, cars_len);
	printf("solution 함수의 변환 값은 %d 입니다.\n", ret);

	return 0;
}