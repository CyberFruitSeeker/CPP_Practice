// 017_swtich.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 추후에 배우게 된다.
enum class PlayerJOBType
{
	Fighter,
	Mage,
	BowMan,
};

int main()
{
	//PlayerJOBType Type = PlayerJOBType::BowMan;

	//switch (Type)
	//{
	//case PlayerJOBType::Fighter:
	//	break;
	//case PlayerJOBType::Mage:
	//	break;
	//case PlayerJOBType::BowMan:
	//	break;
	//default:
	//	break;
	//}

	int A = 10;

	// switch는 다음과 같이 사용하고.
	// case 상수:에 조건과 같다면
	// 그러므로 switch문은 완전히 if문으로 대체될 수 있습니다.
	// switch문에서 내부에서는 일반적으로는 지역변수를 사용할수 없습니다.

	if (A == 10)
	{
		int a = 0;
	}
	else
	{

	}

	switch (A)
	{
	case 10:
	{
		int a = 0;
		break; // switch문에서 break의 의미는 switch 탈출이에요.
	}
	default:
	{
		int a = 0;
		break;
	}
	}
	// switch 메모리 == 상수 인가만 비교할수 있다.

	switch (A)
	{
	case 10:
	{
		int a = 0;
	}
	case 20:
	{
		int a = 0;
	}
	default:
		int a = 0;
		break;
	}

	// break를 꼭 붙여야한다.
	// => 꼭은 상황에 맞춰서 붙이면 됩니다.

	// bool형 상수 표현식
	// ture
	// false

	// int형 상수 표현식
	// 10
	// 1000000
	// 1000000

	// 1바이트 문자형입니다.
	// 문자는 
	// ''안에서 초기화해서 표현해야 합니다.
	// 문자형 상수표현식
	{
		char Ch = 'A';
		char T = 'B';

		// 상수만 올수 있다.
		switch (Ch)
		{
			// case T: // 모든 변수는 비교 대상이 될수 없습니다.
				// break;
		default:
			break;
		}
	}

	{
		char Ch = 'A';

		switch (Ch)
		{
		case 'a': 
		case 'A': 
		{
			int a = 0;
			break;
		}
		default:
			break;
		}

		if (Ch == 'A' || Ch == 'a')
		{

		}
	}

}
