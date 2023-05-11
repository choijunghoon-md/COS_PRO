#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int* solution(const char* schedule[], int schedule_len) {
	int count = 0;

	for (int i = 0; i < schedule_len; i++) {
		if (schedule[i] == "x") count++;
	}

	int* answer = (int*)malloc(sizeof(int) * count);

	for (int i = 0; i < count; i++) {
		for (int j = 0; j < schedule_len; j++) {
			if (i != 0) {
				if (schedule[j] == "x" && j> answer[i-1]-1) {
					answer[i] =j+1;
					break;
				}
			}
			else {
				if (schedule[j] == "x") {
					answer[i] = j+1;
					break;
				}
			}
		}
	}

	return answer;
}

int main() {

	const char* schedule[] = { "o","x","x","o","o","o","x","o","x","x" };
	int schedule_len = 10;
	int* ret = solution(schedule, schedule_len);
	printf("solution 함수의 변환 값은 ");
	for (int i = 0; i < 5; i++) {
		printf("%d, ", ret[i]);
	}
	printf("입니다.");
	return 0;
}