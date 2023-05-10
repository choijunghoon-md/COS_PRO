#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int korean, int english) {
	int answer = 0;

	answer = 70 * 3 - korean - english;

	return answer;
}

int main() {
	
	int korean = 70;
	int english = 60;
	int ret = solution(korean, english);

	printf("solution 함수의 변환 값은 %d 입니다.\n", ret);

	return 0;
}