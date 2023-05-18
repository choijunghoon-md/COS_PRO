#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int papers[],int papers_len,int k) {
	int length = papers_len;
	for (int i = 0; i < papers_len; i++) {
		k -= papers[i];
		if (k < 0) {
			return i;
		}
	}

	return length;
}

int main() {
	int papers1[] = { 2,4,3,2,1 };
	int papers_len1 = 5;
	int k1 = 10;
	int ret1 = solution(papers1, papers_len1, k1);

	printf("solution 함수의 변환 값은 %d 입니다.\n", ret1);

	int papers2[] = { 2,4,3,2,1 };
	int papers_len2 = 5;
	int k2 = 14;
	int ret2 = solution(papers2, papers_len2, k2);

	printf("solution 함수의 변환 값은 %d 입니다.\n", ret2);

	return 0;
}