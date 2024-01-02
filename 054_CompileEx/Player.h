#pragma once
#include <iostream>
// #include "Monster.h"
// 극단적으로 뻗치면 안되고. 아예 언제나 아무헤더도 있으면 안된다.
// 경험이다.
// 최대한 헤더에서 다른 헤더를 추가 안하려고 노력하면 된다.
// 하지만 어쩔수 없을때는 순환참조를 주의하면서 헤더 추가하면 된다.

class Player
{
	class Monster* NewMonster;
	// class Monster& NewMonster;

	void Test()
	{
		// 헤더에서 클래스를 사용하면 안된다.
		// 헤더와 구현의 완전한 분리를 할수가 없어요.
		// NewMonster->Damage(10);
	}

	int Att;
};

