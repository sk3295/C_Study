#include <stdio.h>

#if (3 > 0)
#elif
#else
#endif

// if not define
// > Test Header�� define�� ���� �ִ°�
//   ���� �ƴ϶�� Test Header�� define
//   �ش� ������ ������ �ִٸ� ó�� �ν��� �� �����ϰ�� ���� ����
//	 �� "#pragma one" �� �����̴�.

#ifndef __TEST_HEADER 
#define __TEST_HEADER
#endif

void SayMyName() {
	// ����� ���� ���� �� ����� ��� Ȱ��ȭ
	// ������, ������ ���α׷��� ���� ���� �� �ִ�.

	// ������ ���α׷����� ������ �ڵ尡 ���� �����Ƿ� 
	// ������ �ڵ带 �� �� ����. (�ּ�����)

#ifdef _DEBUG
	printf("%d��, %s\n", __LINE__, __func__);
#endif // _DEBUG
}
