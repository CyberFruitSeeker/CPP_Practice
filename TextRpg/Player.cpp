#include "Player.h"
#include <iostream>

Player::Player()
{
	// 지금은 테스트 코드
	Weapon.SetName("Steel Sword");
	Weapon.SetAtt(10);
}

void Player::StatusRenderStart()
{
	printf_s("레벨 %d\n", Level);
}

int Player::GetRandomAtt()
{
	CurDamage = FightUnit::GetRandomAtt() + Weapon.GetAtt() + Weapon.GetEquipUp();
	return CurDamage;
}

void Player::FightEnd(FightUnit& _Other)
{
	int Gold = _Other.GetGold();
	printf_s("플레이어가 %d 골드를 벌었습니다.\n", Gold);
	AddGold(Gold);

	int Exp = _Other.GetExp();
	printf_s("플레이어가 %d 경험치를 얻었습니다.\n", Exp);
	AddExp(Exp);
	


	// 몬스터가 준 경험치 _Other.GetExp();
	// AddExp(_Other.GetExp());
	// 나의 경험치 GetExp();

	// 나의 능력치를 얼마나 상승시킬지 구현해보기

	// LevelUpExp 비교를 해서

	// Monster
}
