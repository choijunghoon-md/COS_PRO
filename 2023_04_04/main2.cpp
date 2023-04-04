#include <stdio.h>


int fun_a(int s[],int size){
	int sum = 0;
	for (int i = 0; i < size; i++){
		sum += s[i];
	}
	return sum;
}

int fun_b(int s[], int size){
	int max = 0;
	for (int i = 0; i < size; i++){
		if (max <= s[i]){
			max = s[i];
		}
	}
	return max;
}

	int fun_c(int s[], int size){
		int min = 100;
		for (int i = 0; i < size; i++){
			if (min >= s[i]){
				min = s[i];
			}
		}
		return min;
}

	int solution(int s[], int size){
		return fun_a(s, size) - fun_b(s, size) - fun_c(s, size);
	}

	int main(void){
		int scores[] = { 50, 35, 78, 91, 85 };
		int scores_len = 5;
		int solution1;
		solution1 = solution(scores, scores_len);
		printf("°á°ú : %d\n", solution1);
	}

