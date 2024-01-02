#pragma once
#include "Global.h"
// 클래스의 헤더에서
// 다른 클래스의 헤더를 
// include해야 하는 경우에는 2가지가 있다.
// 상속해야 할때.
// 값형으로 쓸때.
// #include "Monster.h"

class Player
{
	// 몬스터의 헤더를 알아야 한다.
	// 몬스터의 크기를 알아야
	// 플레이어의 크기도 정의가 되기 때문이다.
	// Monster NewMonster;

	// 전방선언
	// 이러이러한 클래스가 있을거야.
	// 포인터나 레퍼런스 일때만 이걸 사용할수 있다.
	class Monster* NewMonster;

	int Value;
};

