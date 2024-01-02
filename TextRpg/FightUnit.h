#pragma once
#include "StatusUnit.h"

class FightUnit : public StatusUnit
{
public:
	FightUnit();

	// Get
	inline bool IsDeath() const
	{
		return Hp <= 0;
	}

	inline int GetMinAtt() const
	{
		return MinAtt;
	}

	virtual int GetRandomAtt();

	int GetRandomSpeed() const;

	// Fight 유닛이 데미지를 입히고, 싸움이 끝나는 과정
	void DamageLogic(FightUnit& _Unit);

	void DamageRender();


	virtual void FightStart(FightUnit& _Other)
	{

	}

	virtual void FightEnd(FightUnit& _Other)
	{
	
	}

protected:
	int CurDamage = 0;

private:
};
