#include <stdio.h>

int main() {
	// 1���� �迭�� ��� �迭�� ũ�⸦ ���� ������ �ʾƵ� �ǳ�, 
	// 2���� �迭�� ��� ���� �迭�� ���̴� ���� �ؾ��Ѵ�.
	int class[][4] = { {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4} };
	int grade[6] = { 80, 90, 92, 85, 80 };


	// ���� �ڷ����� �Ϸķ� �� �̾�� ���� �迭�̶�� �Ѵ�.
	// [a][a][a][a][b][b][b][b][c][c][c][c]
	//  0           4           8
	//     1	       5           9
	//        2           6           10
	//           3           7           11
	
	// ���� �迭 ũ���� �ǹ̴� ��ĭ �̵��ϸ� ���� �迭������ �ǹ��Ѵ�.

	/*
	printf("2���� �迭 \"class\"�� ũ�� : %d\n", sizeof(class));
	printf("2���� �迭 \"class[0]\"�� ũ�� : %d\n\n", sizeof(class[0]));
							
	//					��ü �迭����	�ڷ���(�迭)�� ũ��
	for (int j = 0; j < sizeof(class) / sizeof(grade[j]); j++) {
		//					���� ���� ����	   ���� �ڷ���
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

	// ����
	// �������� ���� ����� Ȯ��
	
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

	printf("������ ������ ������ : %d", count);

	// ���� For ��
	/*
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			// %.5d �� ���� �߰��� ������ ���� �� �׸�ŭ �� ������ �Ҵ��Ѵ�.
			// �Ǽ��� ��� �Ҽ��� ���ڸ� ������ ǥ�� ���� �����Ѵ�.
			printf("[%.2d]", class[i][j]);
		}
		printf("\n");
	}
	*/
}