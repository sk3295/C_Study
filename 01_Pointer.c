#include <stdio.h>
#include <stdlib.h>

int main() {
	// int*		: int 포인터 자료형
	// &target	: target의 주소

	int target = 3;
	int* pointer = &target;

	// 포인터는 보통 16진수로 표시됩니다.
	// 0000
	// 8421		0 ~ 15라는 16가지를 표시하려면 비트가 4개 필요합니다.
	
	// 64비트 운영체제 : 포인터의 크기가 64Bit 
	// 32비트 운영체제 : 포인터의 크기가 32Bit 
	
	// 32비트 운영체제의 주소 용량 한계 : 4,294,967,295B
	// 1KB = 1024B
	// 1MB = 1024KB
	// 1GB = 1024MB
	// 1GB = 1,073,741,924B * 4 = 4,294,967,295B

	// 64비트 운영체제의 주소 용량 한계 : 18,446,744,073,709,551,615

	// Memory Allocate (메모리 할당) 
	// > "동적할당" 이라고도 한다.
	//   동적 할당을 통해서 받은 변수는 사라지지 않는다.
	//   따라서 동적할당을 했을 경우 "free" 를 해주어야 한다.
	
	int* test = malloc(sizeof(int));
	test = malloc(sizeof(int));

	// 위에서 받았으나 또 받았을 경우 중간에 놓치는 부분이 생긴다.
	// 이럴 경우 프로그램이 종료될 때까지 액세스 할 수 없다.ㅓ

	free(test);

	printf("%p\n", pointer);
}