#include <stdio.h>

int solution(int price[] , int price_len, int money) {
	int sum = 0;
	for (int i = 0; i < price_len; i++) {
		sum += price[i];
	}
	return money - sum;
}

int main(void) {
	int price[] = { 2100,3200,2100,800 };
	int price_len = sizeof(price) / sizeof(int);
	int money = 10000;
	int solut = solution(price, price_len, money);
	printf("°á°ú %d", solut);
}