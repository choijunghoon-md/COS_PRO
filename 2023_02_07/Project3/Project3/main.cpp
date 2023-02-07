#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int temperature[], int temperature_len, int A, int B) {
	int answer = 0;
	for (int i = A; i < B - 1; i++) {
		if (temperature[A - 1] < temperature[i] || temperature[B - 1] < temperature[i]) {
			answer++;
		}
	}
	return answer;
}


int main(void) {

	int temperature[] = { 3,2,1,5,4,3,3,2 };
	int temperature_len = 8;
	int A = 1;
	int B = 6;
	int ret = solution(temperature, temperature_len, A, B);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�. \n", ret);

	return 1;
}