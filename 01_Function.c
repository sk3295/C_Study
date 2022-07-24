#include <stdio.h>

// Function : 함수
// F(x) > x에 대한 함수

int F(int x) {
	return x + 1;
}

int main() {
	int res_A = F(3);

	printf("%d", res_A);
}