#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int func_a(int number) { //�ڸ���
	int answer = 0;

	while (number != 0) {
		number = number / 10;
		answer++;
	}

	return answer;
}

int func_b(int number, int num) { //������
	int answer = 0;

	for (int i = 0; i < num; i++) {
		int temp = number % 10;
		number = number / 10;
		if (temp != 0) {
			answer = answer * 10 + temp;
		}
	}

	return answer;
}

int func_c(int number1, int number2) { //���̱��ϱ�
	int answer = 0;

	if (number1 > number2)
		answer = number1 - number2;
	else
		answer = number2 - number1;

	return  answer;
}
int solution(int number) { //�˼��մϴ�.. ���� �߸��о �������̿���...
	int answer = 0;
	int num = func_b(number, func_a(number));
	answer = func_c(number,num);
	return answer;
}
int main() {
	int number1 = 120;
	int ret1 = solution(number1);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

	int number2 = 203;
	int ret2 = solution(number2);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}