#include <stdio.h>
#include <Windows.h>
#include <conio.h>

// Function : 함수
// F(x) > x에 대한 함수

int F(int x) {
	return x + 1;
}

void PrintStory(const char* const text, DWORD speed) {
	int i = 0;

	while (text[i] != 0) {
		putchar(text[i]);
		Sleep(speed);
		i++;
	}
	putchar('\n');
}

void Next() {
	printf("[엔터를 눌러 다음으로]");

	int input = 0;
	
	//char buffer[50];
	//fgets(buffer, 50, stdin);

	while (!_kbhit()) {}
	
	input = _getch();
	
	if (input == 0 || input == 224) input = _getch();
	if (input == 32) exit;

	system("cls");
}

void Repeat(int time) {
	if (time <= 0)
		return 0;

	printf("반복\n");
	time--;
	Repeat(time);
}

int main() {
	int res_A = F(3);

	Repeat(-1);

	//printf("%d\n", res_A);
	PrintStory("프린트스토리", 50);
	Next();
	PrintStory("엔터도 마찬가지로", 10);
	PrintStory("직접 치지 않아도 괜찮습니다.", 10);
}