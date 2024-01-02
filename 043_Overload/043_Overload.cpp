// 043_Overload.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// C++ 의 기본 규칙은 달라지지 않았다.
// Test() FullName => Test가 이름이 아니다.
// Test(void)
// 리턴값은 이름에 포함되지 않습니다.
// 이름이 같은데 인자가 다른함수를 여러개 만들수 있는 규칙을
// 오버 로딩이라고 부릅니다.
// 이 오버로딩 규칙은 모든 규격(전역함수 맴버함수 생성자)의 함수의 사용이 가능합니다.
void Test()
{

}

// Test(int)
void Test(int _Value)
{

}

// Test(char)
void Test(char _Value)
{

}

class Monster 
{
public:
	// 생성자
	Monster()
	{

	}

	Monster(int _Value)
	{

	}

	Monster(int _Value0, int _Value1, int _Value2)
	{

	}

};

int main()
{
	Monster NewMonster0 = Monster();
	Monster NewMonster1 = Monster(10);

	Monster NewMonster2 = 10;

	// Monster NewMonster3 = Monster( 10, 10, 10 );
	Monster NewMonster3 = { 10, 10, 10 };
	Test();
}
