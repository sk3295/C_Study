#include <stdio.h>

#define 출력 printf
#define 엔터 ('\n')

#define 정수생성(변수명) int 변수명
#define 최소값(A, B) (A > B) ? B : A

int main() {
	정수생성(A);
	A = 30;
	출력("%d", A);

	엔터;

	출력("%d\n", 최소값(10, 1000));
	출력("%d\n", 최소값(5252, 4455));
}