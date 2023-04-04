#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* func_a(int arr[], int size, int num){
	int* a = (int*)malloc(sizeof(int)*(size - 1));
	int index = 0;
	for (int i = 0; i < size; ++i){
		if (arr[i] != num){
			a[index++] = arr[i];
		}
	}
	return a;
}

int foun_b(int arr[], int size){
	int b = 0;
	for (int i = 0; i < size; ++i){
		if (b < arr[i]){
			b = arr[i];
		}
	}
	return b;
}

int foun_c(int a,int b){
	if (a>b){
		return a - b;
	}
	else{
		return b - a;
	}
}

int solution(int visitor[], int size){
	int max1 = foun_b(visitor, size);
	int* arr = func_a(visitor, size, max1);
	int max2 = foun_b(arr, size-1);
	free(arr);
	return foun_c(max1, max2);
}

int main(void){
	int visitor[] = { 4, 7, 2, 9, 3 };
	int n = 5;
	int solut;
	solut = solution(visitor, n);
	printf("°á°ú %d\n", solut);
}