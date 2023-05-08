#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int a,int b) {
	int answer = 0;
	for (int i = 1; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			answer = i;
			break;
		}
	}
	return answer;
}

int main() {
	int a = 4;
	int b = 6;
	int ret = solution(a, b);

	printf("solution 함수의 변환 값은 %d 입니다.\n", ret);
	return 0;
}