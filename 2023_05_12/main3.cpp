#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int arr[], int arr_len) {
	int answer = 0;
	
	for (int i = 0; i < arr_len; i++) {
		for (int j = 0; j < arr_len; j++) {
			if (i == j) continue;
			else if((float)(arr[i]/2==arr[j])) answer++;
		}
	}


	return answer;
}

int main() {

	int arr[] = { 4,8,3,6,3 };
	int arr_len = 5;
	int ret = solution(arr, arr_len);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

	return 0;
}