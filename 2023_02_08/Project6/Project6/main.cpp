#include <stdio.h>
#include <stdlib.h>

int func_a(int month, int day) {
	int month_list[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int total = 0;
	for (int i = 0; i < month-1; i++) {
		total += month_list[i];
	}
	return total + day;
}

int func_b(int start_month, int start_day, int end_month, int end_day) {
	int ret1 = func_a(start_month, start_day);
	int ret2 = func_a(end_month, end_day);
	return ret2 - ret1;
}

int main(void) {

	int start_month = 1;
	int start_day = 2;
	int end_month = 2;
	int end_day = 2;
	int ret = func_b(start_month, start_day, end_month, end_day);
	printf("func의 값은 %d 입니다. \n", ret);
}