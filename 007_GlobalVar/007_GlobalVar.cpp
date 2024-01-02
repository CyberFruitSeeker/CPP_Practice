// 007_GlobalVar.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int MonsterSpeed = 10;

void MonsterMove()
{
	MonsterSpeed = 8;
}

int main()
{
	MonsterSpeed = 20;

	int Value = 0;
	// 이름없는 메모리 영역을 만들수 있다.
	{
		Value = 20;
	}

}
