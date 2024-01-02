// 006_VarToMemory.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 전역 => 그 어떤 {}에 속하지 않는 영역을 전역
int GlobalA = 10; // 전역변수

// 클래스내부지역 => 클래스를 배우게 되면 알 영역

void Test()
{
	int LocalA = 10; // 지역변수
	// 지역 => 함수의 {}에 속하는 영역을 지역
}

void MonsterMove()
{
	// main함수에 만들수 있으면
	// 다른 함수에도 만들수 있겠죠?
	int MonsterSpeed = 3;
	// int MonsterMoveMonsterSpeed = 3;
}

// 여기서 부터니까.
int main()
{ // 지역을 만들어
	// 대부분의 프로그래밍 언어는
	// 객체지향을 포함했다고 하는 언어들은
	// 개념, 행동, 상태로 인간의 욕구를 구분합니다.

	// 개념 몬스터 만들고 싶다.
	// 몬스터는 움직여야한다 => 행동 => 함수
	// 그래서 스피드 가 필요하다 => 상태 => 변수

	// 변수의 첫번째 규칙
	// 같은 C++이 금지해서가 아니라
	// 메모리영역이 겹치기 때문에 같은 
	// 이름의 변수를 선언할수 없는겁니다.

	// 지역변수
	// 함수안에 만들어진 변수를 지역변수라고 부릅니다.
	int MonsterSpeed = 3;
	// int MonsterSpeed = 5;
	// FullName => int mainMonsterSpeed = 3;

	MonsterMove();
	Test();
} // 지역을 끝내.
