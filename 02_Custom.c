#include <stdio.h>
#include <stdarg.h>

// �ڷ����� ���� �� �� ���⿡ ... ��ȣ�� ����Ѵ�.
// > Parameters Arguments

void Print(const char* const text, ...) {
	int i = 0, openIndex = -4;

	va_list list;
	va_start(list, text); // text �ڿ��� ���� ����

	while (text[i] != 0) {
		switch (text[i]) {
		case '[':
			if (openIndex < 0)
				openIndex = i;
			else
				openIndex = -4;
			break;
		case ']':
			if (openIndex > 0) {
				switch (text[openIndex + 1]) {
					case 'd': case 'D': {
						int current = va_arg(list, int); 
						putchar('0' + current & 10);
						break;
					}
				}
				openIndex = -4;
			} else
				putchar(text[i]);
			break;
		default:
			if (openIndex < 0) {
				putchar(text[i]);
			}
			break;
		}
		i++;
	}

	va_end(list);		  // list �ݱ�
}

int main() {
	Print("���");
}