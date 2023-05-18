#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int weight,int boxes[], int boxes_len) {
	int answer = 0;
	
	for (int i = 0; i < boxes_len; i++) {
		if (boxes[i] >= (float)(weight * 0.9) && boxes[i] <= (float)(weight * 1.1)) {
			answer++;
		}
	}

	return answer;
}

int main() {
	int weight = 600;
	int boxes[5] = { 653,670,533,540,660 };
	int boxes_len = 5;
	int ret = solution(weight, boxes, boxes_len);

	printf("solution 함수의 변환 값은 %d 입니다.\n", ret);

	return 0;
}