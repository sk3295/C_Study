#include <stdio.h>

#if (3 > 0)
#elif
#else
#endif

// if not define
// > Test Header가 define된 것이 있는가
//   만일 아니라면 Test Header를 define
//   해당 구문이 여러개 있다면 처음 인식한 걸 제외하고는 전부 삭제
//	 즉 "#pragma one" 의 원형이다.

#ifndef __TEST_HEADER 
#define __TEST_HEADER
#endif

void SayMyName() {
	// 디버그 모드로 만들 시 디버깅 모드 활성화
	// 디버깅용, 유저용 프로그램을 따로 만들 수 있다.

	// 유저용 프로그램에는 디버깅용 코드가 들어가지 않으므로 
	// 디버깅용 코드를 볼 수 없다. (주석까지)

#ifdef _DEBUG
	printf("%d줄, %s\n", __LINE__, __func__);
#endif // _DEBUG
}
