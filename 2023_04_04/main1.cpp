#include<stdio.h>

int func_a(int n){
	int sum = 0;
	for (int i = 1; i <= n; i++){
		sum += i;
	}
	return sum;
}

int solution(int n, int m){
	return func_a(m) - func_a(n - 1);
}

int main(void){
	int n1,m1,n2,m2,solution1,solution2;
	n1 = 5;
	m1 = 10;
	solution1 = solution(n1, m1);
	printf("%d부터 %d까지 자연수의 합은 %d입니다.\n", n1, m1, solution1);
	n2 = 6;
	m2 = 6;
	solution2 = solution(n2, m2);
	printf("%d부터 %d까지 자연수의 합은 %d입니다.\n", n2, m2, solution2);
	return 1;
}