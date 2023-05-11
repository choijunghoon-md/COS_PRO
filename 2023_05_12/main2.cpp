#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int programs[][2],int programs_len) {
	int answer = 0;
	int used_tv[25] = { 0, };
	for (int i = 0; i < programs_len; i++) {
		for (int j = programs[i][0]; j <= programs[i][1]; j++) {
			used_tv[j]++;
		}
	}

	for (int i = 0; i < 25; i++) {
		if(used_tv[i] >= 2) {
			answer++;
		}
	}

	return answer;
}

int main() {

	int programs[][2] = { {1,6},{3,5},{2,8} };
	int programs_len = 3;
	int ret = solution(programs, programs_len);
	printf("solution 함수의 변환 값은 %d 입니다.\n", ret);

	return 0;
}