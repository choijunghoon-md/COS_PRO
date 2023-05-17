#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int calorie[], int calorie_len) {
	int answer = 0;
	int min = calorie[0];
	for (int i = 0; i < calorie_len; i++) {
		if (calorie[i] < min) {
			min = calorie[i];
		}
		answer += calorie[i] - min;
	}

	return answer;
}

int main() {
	int calorie[] = { 713,665,873,500,751 };
	int ret = solution(calorie, 5);
	printf("solution 함수의 변환 값은 %d 입니다.\n", ret);

	return 0;
}