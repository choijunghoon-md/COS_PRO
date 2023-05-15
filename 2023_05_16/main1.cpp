#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct Student {
	char name[20];
	int score;
}Student;

int compare(const void* a, const void* b) {
	Student frist = *(Student*)a;
	Student second = *(Student*)a;
	if (frist.score > second.score) return -1;
	else if (frist.score < second.score) return 1;
	else return 0;
}

char* solution(const char*names[], int names_len, int scores[],int scores_len, int k) {
	int len = names_len;
	Student* students = (Student*)malloc(sizeof(Student) * names_len);
	for (int i = 0; i < names_len; i++) {
		strcpy(students[i].name, names[i]);
		students[i].score = scores[i];
	}
	qsort(students, len, sizeof(Student), compare);
	return students[k-1].name;
}

int main() {
	const char* names[5] = { "lukas","james","levi","eli","max" };
	int names_len = 5;
	int scores[5] = { 30,20,50,40,10 };
	int scores_len = 5;
	int k = 2;
	char* ret = solution(names,names_len,scores,scores_len,k);

	printf("solution ÇÔ¼öÀÇ º¯È¯ °ªÀº %s ÀÔ´Ï´Ù.\n", ret);

	return 0;
}
