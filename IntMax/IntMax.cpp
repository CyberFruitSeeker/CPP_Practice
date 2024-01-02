// IntMax.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	{
		int Value = ~0;
		Value = Value ^ (1 << 31);

		int ValuM = 0b10000000000000000000000000000000;
		int a = 0;
	}

	{
		// CPU 칩셋마다 다를때가 있다고.
		int Value = 0b11111111111111111111111111111111;
		Value = Value >> 1;
		int a = 0;
	}
}