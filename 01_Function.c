#include <stdio.h>
#include <Windows.h>
#include <conio.h>

// Function : �Լ�
// F(x) > x�� ���� �Լ�

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
	printf("[���͸� ���� ��������]");

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

	printf("�ݺ�\n");
	time--;
	Repeat(time);
}

int main() {
	int res_A = F(3);

	Repeat(-1);

	//printf("%d\n", res_A);
	PrintStory("����Ʈ���丮", 50);
	Next();
	PrintStory("���͵� ����������", 10);
	PrintStory("���� ġ�� �ʾƵ� �������ϴ�.", 10);
}