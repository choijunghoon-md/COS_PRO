#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char name_list[][8], int namelistlen) {
	int returning = 0;
	for (int i = 0; i < namelistlen; i++) {
		for (int j = 0; name_list[i][j] != 0; ++j) {
			if (name_list[i][j] == 'j' || name_list[i][j] == 'k') {
				returning++;
				break;
			}
		}
	}
	return returning;
}

int main(void) {

	char name_list[4][8] = { {'j','a','m','e','s'},{'l','u','k','e'},{'o','i','l','v','e','r'},{'j','a','c','k'}};
	int namelistlen = 4;
	int slout = solution(name_list, namelistlen);
	printf("°á°ú %d", slout);


}