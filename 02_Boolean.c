#include <stdio.h>
#include <stdbool.h>

// ���� ������ 
// > =

// �� ������
// > <, <=, >, >=

// NOT (! )		: True > False, False > True (����)

// OR  (||)		: �� �� �ϳ��� True�� True, ��� False�� False 
//				  �̸� "����"�̶�� �� (A + B)

// AND (&&)		: �� �� �ϳ��� False�� False, ��� True�� True
//				  �̸� "����"�̶�� �� (A * B)

// XOR (^ )		: �� �� �ϳ��� True�� True, ��� True Ȥ�� False�� ��� False
//				  �̸� "��Ÿ�� ����"�̶�� ��

// �� �����ڴ� -> �������� �����

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

// Xor�� �״�� �ΰ� ���ڸ��� AND�� ������� �÷��ݴϴ�.
// �̸� �ݰ������ ��

//	�ؿ��� �ȿö��		�ؿ��� �ö��
//	0	0	0	0		1	1	1	1
//  0	0	1	1		0	0	1	1
// +0  +1  +0  +1	   +0  +1  +0  +1
// --  --  --  --	   --  --  --  --
// 00  01  01  10	   01  10  10  11



int main() {

	// ������ ����� ���� ( False / True )
	
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