#include "Monster.h"

void Monster::FightStart(FightUnit& _Player)
{
	HpReset(/*this가 생략되어 있다는 것을 기억해야 한다.*/);
	RandomGold(1500, 20000);
}

void Monster::FightEnd(/*Monster* const this,*/FightUnit& _Player)
{
	// 랜덤하게 경험치를 정해야 한다.

	
}