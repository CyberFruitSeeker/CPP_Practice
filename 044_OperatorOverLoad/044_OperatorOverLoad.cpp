// 044_OperatorOverLoad.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 보통 수학관련 사용자 정의 자료형을 만들때 많이 사용합니다.
class MyInt
{


public:
	MyInt()
		// : Value(0)
	{

	}

	MyInt(int _Value)
		: Value(_Value)
	{

	}

	// 복사
	void operator=(const MyInt& _Other)
	{
		return;
	}


	// 연산자 겹지정은 클래스의 함수를 만들때
	// 연산자 형식으로 사용할수 있게 만들수 있는 함수입니다.
	MyInt operator-(MyInt _Other)
	{
		return Value - _Other.Value;
	}

	MyInt operator+(MyInt _Other)
	{
		return Value * _Other.Value;
	}


private:
	int Value = 0;

};

class Player
{
public:
	// 연산자 겹지정이라고 한다.
	// const Player&
	// 레퍼런스 이기 때문에 8바이트만 사용하고 => 가장중요한 이유
	// 그래서 빠르다.
	// 레퍼런스이기 때문에 편하고
	// const이기 때문에 값이 바뀌어서 나오지도 않는다.
	// 레퍼런스 이기 때문에 nullptr이나 비어있는 값이 인자로
	// 들어오지 않는다.
	void operator=(const Player& _Other)
	{
		Hp = _Other.Hp;
		Att = _Other.Att;
		Def = _Other.Def;
		Cri = _Other.Cri;
		Exp = _Other.Exp;
		Gold = _Other.Gold;

		return;
	}

public:
	int Hp;
	int Att;
	int Def;
	int Cri;
	int Exp;
	int Gold;
	// ......
};

void LevelUp(int NewPlayer)
{

}

void LevelUp(Player NewPlayer)
{

}

void StatusRender(const Player& NewPlayer)
{


	// NewPlayer.Att = 999999999999999;

}

void Function(int _Function)
{

}

int main()
{
	{
		int Value = 20;
		Function(Value);

		Player NewPlayer = Player();
		StatusRender(NewPlayer);
	}

	{
		MyInt Left = 20;
		MyInt Right = 20;
		MyInt Result = 0;
		// Result = Left - Right;
		Result = Left.operator-(Right);

		Result = Left + Right;
	}

	{
		int Left = 20;
		int Right = 20;
		// Left - Right;
	}

	{
		Player NewPlayer0 = { 1, 1, 1, 1, 1, 1 };
		Player NewPlayer1 = { 2, 2, 2, 2, 2, 2 };

		// NewPlayer0 = NewPlayer1;
		NewPlayer0.operator=(NewPlayer1);

		int a = 0;
	}

	std::cout << "Hello World!\n";
}
