// 020_For.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int Value = 1;
	// 복합 할당 연산자
	// for 까지만 치고 => Tab Tab을 사용하면 되는데.
	// size_t는 추후 설명
	// int로 변경해서 시작하겠습니다.
	//for (size_t i = 0; i < length; i++)
	//{
	//}

	// while문인데
	// 어떠한 변수를 초기화하는 초기화문과
	// 그 변수를 증감시키는 증감문이 합쳐진 형태.

	for (
		int i = 0;  // 초기화문
		i < 10; // 조건문
		i++ // 증감문
		)
	{
		putchar('A');
	}

	// 초기화문
	// 조건문
	// 실행코드
	// 증감문
	// 조건문
	// 실행코드
	// 증감문

	// 인간의 귀찮음과
	// 불신감이 느껴지는 문법.
	// 정석사용법대로 사용
	// 진짜 문제입니다.
	// 
	//for (; true ;)
	//{
	//	putchar('A');
	//}

	for (int Count = 0; Count != 0; ++Count)
	{
		putchar('A');
	}


}
