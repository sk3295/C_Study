#include <stdio.h>
#include <stdarg.h>

// 자료형을 예측 할 수 없기에 ... 기호를 사용한다.
// > Parameters Arguments

void Print(const char* const text, ...) {
	int i = 0, openIndex = -4;

	va_list list;
	va_start(list, text); // text 뒤에서 부터 시작

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

	va_end(list);		  // list 닫기
}

int main() {
	Print("출력");
}