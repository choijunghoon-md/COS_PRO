#include <stdio.h>


int solution(int ston[], int size){

	int count = 0;
	int a = 0;

	while (a < size){
		a = a + ston[a];
		count++;
	}

	return count;
}

int main(void){
	int stones[] = { 2, 5, 1, 3, 2, 1 };
	int stones_len = 6;
	int solut;
	solut = solution(stones, stones_len);
	printf("결과 %d \n", solut);
}
