#include <stdio.h>
#include <stdlib.h>

int solution(int arr[][4], int row_len, int col_len, int k) {
	int* answer = (int*)malloc(sizeof(int) * (row_len * col_len));
	int temp = 0;
	int returning = 0;

	for (int i = 0; i < row_len; i++) {
		for (int j = 0; j < col_len; j++) {
			answer[i * col_len + j] = arr[i][j];
		}
	}
	for (int i = 0; i < row_len * col_len; i++) {
		for (int j = 0; j < row_len * col_len; j++) {
			if (answer[i] > answer[j]) {
				temp = answer[i];
				answer[i] = answer[j];
				answer[j] = temp;
			}
		}
	}
	returning = answer[row_len * col_len - k];
	free(answer);
	return returning;
}

int main(void) {
	int arr[][4] = { {5,12,4,31},{24,13,11,2},{43,44,19,26},{33,65,20,21} };
	int arr_row_len = 4;
	int arr_col_len = 4;
	int k = 4;
	int solut = solution(arr, arr_row_len, arr_col_len, k);
	printf("°á°ú %d", solut);
}