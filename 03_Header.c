#include <stdio.h>

#define ��� printf
#define ���� ('\n')

#define ��������(������) int ������
#define �ּҰ�(A, B) (A > B) ? B : A

int main() {
	��������(A);
	A = 30;
	���("%d", A);

	����;

	���("%d\n", �ּҰ�(10, 1000));
	���("%d\n", �ּҰ�(5252, 4455));
}