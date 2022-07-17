#include <stdio.h>

int main() {
	// 1차원 배열의 경우 배열의 크기를 지정 해주지 않아도 되나, 
	// 2차원 배열의 경우 안쪽 배열의 길이는 지정 해야한다.
	int class[][4] = { {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4} };
	int grade[6] = { 80, 90, 92, 85, 80 };


	// 같은 자료형을 일렬로 쭉 이어둔 것을 배열이라고 한다.
	// [a][a][a][a][b][b][b][b][c][c][c][c]
	//  0           4           8
	//     1	       5           9
	//        2           6           10
	//           3           7           11
	
	// 안쪽 배열 크기의 의미는 몇칸 이동하면 다음 배열인지를 의미한다.

	/*
	printf("2차원 배열 \"class\"의 크기 : %d\n", sizeof(class));
	printf("2차원 배열 \"class[0]\"의 크기 : %d\n\n", sizeof(class[0]));
							
	//					전체 배열길이	자료형(배열)의 크기
	for (int j = 0; j < sizeof(class) / sizeof(grade[j]); j++) {
		//					현재 줄의 길이	   내부 자료형
		for (int i = 0; i < sizeof(class[j]) / sizeof(int); i++) {
			printf("[%.2d]", class[j][i]);
		}
		printf("\n");
	}

	for (int y = 0; y < sizeof(class) / sizeof(class[y]); y++) {
		printf("%d", class[y][2]);
	}
	printf("\n");
	for (int x = 0; x < sizeof(class[1]) / sizeof(int); x++) {
		printf("%d", class[1][x]);
	}
	*/

	// 빙고
	// 가로줄의 빙고가 몇개인지 확인
	
	char bingo[3][3] =
	{
		{0, 1, 1},
		{0, 1, 0},
		{1, 1, 1}
	};
	
	int count = 0;

	for (int i = 0; i < 3; i++) {
		int j = 0;
		if (bingo[i][j] == 1) {
			j++;
			if (bingo[i][j] == 1) {
				j++;
				if (bingo[i][j] == 1) {
					j++;
					count++;
				}
			}
		}
	}

	printf("가로줄 빙고의 갯수는 : %d", count);

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