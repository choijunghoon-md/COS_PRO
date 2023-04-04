#include <stdio.h>
#include <stdlib.h>

int* solution(int scores[], int size){
	int* a = (int*)malloc(sizeof(int)* 5);
	for (int i = 0; i < 5; i++){
		a[i] = 0;
	}
	for (int i = 0; i < size; i++){
		if (100 >= scores[i] && 85 <= scores[i]){
			a[0] += 1;
		}
		else if (85 > scores[i] && 70 <= scores[i]){
			a[1] += 1;
		}
		else if (70 > scores[i] && 55 <= scores[i]){
			a[2] += 1;
		}
		else if (55 > scores[i] && 40 <= scores[i]){
			a[3] += 1;
		}
		else if (40 > scores[i] && 0 <= scores[i]){
			a[4] += 1;
		}
	}
	return a;
}

int main(void){
	int scores[5] = { 86, 72, 98, 60, 45 };
	int scores_len = 8;
	int *solut = (int*)malloc(sizeof(int)* 5);
	solut = solution(scores, scores_len);
	printf("°á°ú : ");
	for (int i = 0; i < 5; i++){
		printf(" %d ", solut[i]);
	}
	free(solut);
	return 1;
}