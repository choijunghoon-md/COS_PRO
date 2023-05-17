#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int classes[],int classes_len, int m) {
	int answer = 0;
	for (int i = 0; i < classes_len; i++) {
		answer += (m - classes[i] % m + classes[i])/m;
	}
	return answer;
}

int main() {
	int classes[] = { 80,45,33,20 };
	int m = 30;
	int ret = solution(classes, 4, m);
	printf("solution 함수의 변환 값은 %d 입니다.\n", ret);

	return 0;
}