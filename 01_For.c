#include <stdio.h>

int main() {

	// 피라미드 그리기

	int startNumber = 5;

	for (int i = 1; i <= startNumber; i++) {
		for (int j = 0; j < startNumber - i; j++) {
			printf(" ");
		}
		for (int j = 1; j < 2 * i; j++) {
			printf("*");
		}
		printf("\n");
	}
}