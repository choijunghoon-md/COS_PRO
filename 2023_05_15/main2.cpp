#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int day,int numbers[],int numbers_len) {
	int answer=0;
	for (int i = 0; i < numbers_len; i++) {
		if (day % 2 == numbers[i] % 2) answer++;
	}

	return answer;
}

int main() {
	int day = 17;
	int numbers[] = { 3285,1724,4438,2988,3131,2998 };
	int numbers_len = 6;
	int ret = solution(day, numbers, numbers_len);
	
	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

	return 0;
}