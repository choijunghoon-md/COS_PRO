#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int n, int votes[], int votes_len) {
	int* count = (int*)malloc(sizeof(int) * n);
	memset(count, 0, sizeof(int) * n);
	int answer = 0;

	for (int i = 0; i < votes_len; i++) {
		count[votes[i] - 1]++;
	}
	for (int i = 0; i < n; i++) {
		if (count[answer] < count[i]) {
			answer = i;
		}
	}

	return answer + 1;
}

int main() {
	int n1 = 3;
	int votes1[7] = { 1,2,1,3,1,2,1 };
	int votes_len1 = 7;
	int ret1 = solution(n1, votes1, votes_len1);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

	int n2 = 2;
	int votes2[7] = { 2,1,2,1,2,2,1 };
	int votes_len2 = 7;
	int ret2 = solution(n2, votes2, votes_len2);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);

	return 0;
}