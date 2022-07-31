#include <stdio.h>

int main() {
	int target = 3;
	int* pointer = target;

	// 포인터는 보통 16진수로 표시됩니다.
	// 0000
	// 8421		0 ~ 15라는 16가지를 표시하려면 비트가 4개 필요합니다.
	
	// 64비트 운영체제 : 포인터의 크기가 64Bit 
	// 32비트 운영체제 : 포인터의 크기가 32Bit 

	printf("%p\n", pointer);
}