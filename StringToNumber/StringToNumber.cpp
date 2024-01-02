// StringToNumber.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int StringCount(const char* const _Ptr)
{
	int Count = 0;
	while (_Ptr[Count])
	{
		char Ch = _Ptr[Count];
		++Count;
	}
	return Count;
}

int StringToNumber(const char* const _NumberString)
{
	// 글자 개수를 알아내야 합니다.
	// StringCount();
	// *= 10을 써야 합니다.
	// /= 10 써야 합니다.
	// = 변수 - '0'
	// for문을 사용해야합니다.
	// 예외처리 안합니다.
	// char Ch = _NumberString[i];

	int Count = StringCount(_NumberString);
	int Value = 1;

	// pow라는 함수가 이미 있어요.
	for (int i = 0; i < Count - 1; i++)
	{
		Value *= 10;
	}

	int Result = 0;
	for (int i = 0; i < Count; i++)
	{
		char Ch = _NumberString[i];
		int Number = Ch - '0';
		Result += Number * Value;
		Value /= 10;
	}

	return Result;
}

void NumberToString(int Number, char* _Ptr)
{
	// 어떤 함수든 원본값을 보존해 놓는게 좋습니다.
	int CalNumber = Number;
	int NumberCount = 0;
	const char* CPtr = _Ptr;

	while (CalNumber)
	{
		CalNumber /= 10;
		++NumberCount;
	}

	int Mul = 1;
	// pow라는 함수가 이미 있어요.
	for (int i = 0; i < NumberCount - 1; i++)
	{
		Mul *= 10;
	}

	int Value = 0;
	CalNumber = Number;

	for (int i = 0; i < NumberCount; i++)
	{
		// 0나누기가 허용되지 않는다.
		Value = CalNumber / Mul;
		_Ptr[i] = Value + '0';
		CalNumber -= Value * Mul;
		Mul /= 10;
	}



	int a = 0;

	// 123
	// 1
	// 2
	// 3

	// 10나누기를 합니다.

	// 정수가 몇자리인지 알아야 합니다.

}


int main()
{
	int a = printf_s("aaaaa");

	int Number = StringToNumber("6544");

	char Arr[20] = {};

	// 이 문제는 내일 봅시다.
	NumberToString(920300, Arr);
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
