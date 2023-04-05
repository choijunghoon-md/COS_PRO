#include <stdio.h>

int solution(int height[],int len, int k) {
	int count = 0;
	for (int i = 0; i < len; i++) {
		if (k < height[i]) { count++; }
	}
	return count;
}

int main(void) {
	int height[] = { 165,170,175,180,184 };
	int k = 175;
	int len = sizeof(height) / sizeof(int);
	int soult = solution(height,len,k);
	printf("°á°ú : %d", soult);
}