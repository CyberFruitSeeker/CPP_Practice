// 033_Random.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 난수의 시드벨류
int Random = 0;

void SeedChange(int _Value) // srand
{
	Random = _Value;
}

int Randomint() // rand
{
    return ++Random;
}

int main()
{
	//for (size_t i = 0; i < 5; i++)
	//{
	//	int Number = Randomint();
	//	printf_s("%d\n", Number);
	//}

	int Value = 0;
	
	__int64 Address = reinterpret_cast<__int64>(&Value);

	srand(Address);

	for (size_t i = 0; i < 5; i++)
	{
		// 	srand(Address);
		int Number = rand();
		printf_s("%d\n", Number);
	}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

}
