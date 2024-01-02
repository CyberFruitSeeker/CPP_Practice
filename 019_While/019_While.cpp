// 019_While.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 함수의 인자로 정적배열을 쓸수 없습.
// 정적배열 => int Arr[10] => 상수로 배열의 크기가 정해진 배열을
// 그래서 포인터로 받을수밖에 없는데 그러면 뭘 알수가 없죠?
// 크기를 알수가 없어요.
void MyPrintf(char* _Ptr)
{
	int Count = 0;

	// char* CurPtr = (_Ptr + 0);
	// char CurCh = *(_Ptr + 0);
	// char CurCh = _Ptr[0];

	while (_Ptr[Count])
	{
		char Ch = _Ptr[Count];
		putchar(static_cast<int>(Ch));
		Count = Count + 1;
	}
}

int main()
{

	{
		//char String0[5] = { 'A', 'A', 'A', 'A', 'A' };
		//MyPrintf(String0);

		char String1[5] = "ABCD";
		MyPrintf(String1);
		return 0;
	}

	{
		// 글자 1개를 출력할수 있는 함수이다.
		// putchar('A');

		// while문은 반복문 계열로서
		// if문과 비슷해보지만 다르다.
		// if(메모리영역)
		// {
		//    실행 코드
		// }

		// while(메모리영역) 조건문
		// {
		//		실행코드
		// }
		// 조건문으로 들어가서 메모리영역의 메모리가 참이라면 
		// 실행코드를 1번 실행하고 다시 조건문으로 들어간다.

		// 즉 아래와 같은 코드는 무한히 화면에
		// 'A'를 출력하게 된다.
		//while (true)
		//{
		//	putchar('A');
		//}

		int Count = 5;

		// 다음과 같이 변수를 썼을때
		// 메모리영역이 거짓이라면 while을 빠져나옵니다.
		while (Count)
		{
			// putchar('A');
			Count = Count - 1;

			if (Count == 0)
			{
				int a = 0;
			}
		}

		Count = 5;
		// 이와같이 ,로 여러가지 구분을 사용할수는 있다.
		//while (Count = Count - 1, Count)
		//{
		//}
	}

	{
		// 마음이 급한사람
		// 침작하지 못한사람

		// 그려면 저는 10분만 100번

		char String0[5] = "ABCD";
		char String1[5] = { 'A', 'A', 'A', 'A', 'A' };

		int Count = 0;

		// 1바이트 문자형이기는 한데
		// 문자 => 숫자 참과 거짓이 구분되고.
		// 다음과 같은 코드를 사용할수 있다.
		// 'A' => 65

		char Ch = String0[0];
		char NextCh = String0[0];

		while (NextCh)
		{
			// 한번 값을 받아보는 습관을 들여라.
			Ch = String0[Count];
			putchar(static_cast<int>(Ch));
			Count = Count + 1;
			NextCh = String0[Count];
			int a = 0;
		}
	}

	{
		// 마음이 급한사람
		// 침작하지 못한사람

		// 그려면 저는 10분만 100번

		char String1[5] = { 'A', 'A', 'A', 'A', 'A' };

		int Count = 0;

		while (String1[Count])
		{
			// 한번 값을 받아보는 습관을 들여라.
			char Ch = String1[Count];
			putchar(static_cast<int>(Ch));
			Count = Count + 1;
			char NextCh = String1[Count];
			int a = 0;
		}
	}

	{
		// 일반적인 while문이 
		// 조건문
		// 실행코드
		// 조건문
		// 실행코드
		// ...

		// do while문은
		// 실행코드
		// 조건문
		// 실행코드
		// 조건문
		// ...

		// 어떤 실행코드든 최초에 1번은 실행되기를 원한다면
		// do while을 사용한다.
		int Count = 5;
		do
		{
			Count = Count - 1;
		} while (Count);
	}
}
