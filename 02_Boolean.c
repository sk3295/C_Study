#include <stdio.h>
#include <stdbool.h>

// 대입 연산자 
// > =

// 비교 연산자
// > <, <=, >, >=

// NOT (! )		: True > False, False > True (반전)

// OR  (||)		: 둘 중 하나라도 True면 True, 모두 False면 False 
//				  이를 "논리합"이라고도 함 (A + B)

// AND (&&)		: 둘 중 하나라도 False면 False, 모두 True면 True
//				  이를 "논리곱"이라고도 함 (A * B)

// XOR (^ )		: 둘 중 하나만 True면 True, 모두 True 혹은 False일 경우 False
//				  이를 "베타적 논리합"이라고도 함

// 논리 연산자는 -> 방향으로 연산됨

//			     OR		  AND		XOR		 NAND
// T	T |		 T		  T         F		 F
// T	F |		 T		  F			T		 T
// F	T |		 T		  F			T		 T
// F	F |		 F		  F         F		 T

// 1 + 1
//	0	0	1	1
// +0  +1  +0  +1
// --  --  --  --
// 00  01  01  10

//		   A	B
// 0 0  |  0	0
// 0 1  |  0	1
// 1 0  |  0	1
// 1 1	|  1	0
//		  AND  XOR

// Xor을 그대로 두고 윗자리의 AND의 결과값을 올려줍니다.
// 이를 반가산기라고 함

//	밑에서 안올라옴		밑에서 올라옴
//	0	0	0	0		1	1	1	1
//  0	0	1	1		0	0	1	1
// +0  +1  +0  +1	   +0  +1  +0  +1
// --  --  --  --	   --  --  --  --
// 00  01  01  10	   01  10  10  11



int main() {

	// 조건의 결과를 저장 ( False / True )
	
	/*
	bool condition = !(50 > 20);
	bool A = true, B = false;

	if ((A + B) * !(A * B))
		printf("True");
	else
		printf("False");
	*/

	int age = 20;

	if (15 <= age && age < 40)
		printf("True");
	else
		printf("False");

	/*
	if (age < 15 || age > 60)
		printf("True");
	else
		printf("False");
	*/
}