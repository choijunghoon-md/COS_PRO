#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(char* s) {
	char* s_r = (char*)malloc(sizeof(char) * (4));
	strcpy(s_r, s);
	for (int i = 0; s_r[i] != 0; ++i) {
		if (s_r[i] == 'a')s_r[i] = 'z';
		else if (s_r[i] == 'z')s_r[i] = 'a';
	}
	return s_r;
}

int main(void){
	char s[] = { 'a', 'b', 'z' };
	char* r_s = (char*)malloc(sizeof(char)* 3);
	r_s = solution(s);
	printf("°á°ú %c%c%c", r_s[0],r_s[1],r_s[2]);
	return 0;
}