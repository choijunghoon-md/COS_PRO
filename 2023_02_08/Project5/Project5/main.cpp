#include <stdio.h>
#include <stdlib.h>

int solution(int price, char grade) {

	int answer = 0;
	double percent;
	int sale;
	switch (grade)
	{
	case 'S':
		sale = price * 0.95;
		break;
	case 'G':
		sale = price * 0.9;
		break;
	case 'V':
		sale = price * 0.85;
		break;

	default:printf("ERROR\n");
		break;
	}
	answer = sale;
	return answer;
 }

int main(void) {

	int price = 96900;
	char grade = 'S';
	int ret = solution(price, grade);
	printf("solution 값은 %d 입니다.", ret);
}