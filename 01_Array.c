#include <stdio.h>

int main() {
	// �̴ϼȶ����� : �ʱ�ȭ
	char gameName[3] = {'E', 'X', 0};
	char test[] = "EX";
	char largeArray[1000] = { 'a' };

	gameName[1] = 'A';
	gameName[0] = gameName[1];
	
	for (int i = 0; i < 1000; i++) {
		largeArray[i] = 'a';
	}

	for (int i = 0; i < 1000; i++) {
		char a = 'a';
		largeArray[i] = a;
		a++;
	}

	for (int i = 0; i < 1000; i++) {
		largeArray[i] = 'a' + (i % 26);
	}

	largeArray[999] = 0;

	printf(gameName);
	printf(test);
	printf(largeArray);
	printf("\n���⼭ ����ϴ� ���ڿ��� �迭");



}