#include <stdio.h>

int main() {
	// 1차원 배열의 경우 배열의 크기를 지정 해주지 않아도 되나, 
	// 2차원 배열의 경우 안쪽 배열의 길이는 지정 해야한다.
	int class[][4] = { {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4} };
	int grade[6] = { 80, 90, 92, 85, 80 };


	// 같은 자료형을 일렬로 쭉 이어둔 것을 배열이라고 한다.
	// [a][a][a][a][b][b][b][b][c][c][c][c]
	
	for (int i = 0; i < 12; i++) {
		printf("[%.2d]", class[0][i]);
	}

	// 이중 For 문
	/*
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			// %.5d 와 같이 중간에 정수를 넣을 시 그만큼 빈 공간을 할당한다.
			// 실수일 경우 소수점 몇자리 수까지 표시 할지 결정한다.
			printf("[%.2d]", class[i][j]);
		}
		printf("\n");
	}
	*/
}