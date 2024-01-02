// 060_MemberFunctionConst.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class FightUnit 
{
public:
	// Player* Test; <= 역적
	//                  나는 구조를 망치고 싶다.
};

class Player : public FightUnit
{
public:
	// 함수 뒤에 const를 붙이는 것은 
	// this를 cosnt Player* const this
	// 로 변환하겠다는 의미다.
	int GetHp(/*const Player* const this*/) const
	{
		/*this->*/
		// Hp = 300;
		return Hp;
	}

private:
	int Hp = 100;
	int Att = 10;
};

int main()
{


//     std::cout << "Hello World!\n";
}
