#include <stdio.h>

//#define _CRT_SECURE_NO_WARNINGS
int j = 0;
int i = 0;
int turn = 0;

int *score_rank(int* a) {
	int b[8];
	int c[8];

	for (i = 0; i < 8; i++) {
		b[i] = a[i];
	}

	for (i = 0; i < 8; i++) {
		for (j = i + 1; j < 8; j++) {
			if (b[i] < b[j]) {
				turn = b[i];
				b[i] = b[j];
				b[j] = turn;
			}
		}
	}

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if (a[i] == b[j]) {
				c[i] = j+1;
				break;
			}
		}
	}

	return c;
}

int main(void) {
	int score[8] = {90,87,87,23,35,28,12,46};
	int* score_ranking = score_rank(score);

	printf("[");
	for (i = 0; i < 8; i++) {
		printf(" %d ", score_ranking[i]);
	}
	printf("]");

	return 0;
}

