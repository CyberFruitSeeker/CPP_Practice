// 070_Leak.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Monster
{
public:
	int Att;
	int Hp;
	int Def;
};

int main()
{
	// 위치는 무조건 프로그래밍 시작과 함께.
	// 이건 그냥 외우셔야 합니다.
	// 무조건 프로그래밍 시작에 놔야 합니다.
	// 시작부분에 놓지 않으면 릭을 못잡는경우가 있기 때문이다.
	_CrtSetDbgFlag(_CRTDBG_LEAK_CHECK_DF | _CRTDBG_ALLOC_MEM_DF);
	{
		// 메모리를 할당하는 방법은 2가지가 있는데.
		// 객체 1개를 할당하는 방법
		Monster* NewMonster = new Monster();

		// 릭이 남으면 보통 모든 코딩을 정지하고.
		// 릭이 남았다는것 자체가 이미 심각한 상황.

		// 꼼꼼하지 못한사람은 C++ 프로그래머가 되기 힘든 이유중에 하나.
		delete NewMonster;

		// 릭때문에 메모리가 남아서 내 프로그램이 꺼졌는데.
		// 컴퓨터가 느려졌다. => 말도 안되는 소리.
	}

	{
		int MonsterCount = 10;

		int PlayLevel = 1;

		// 어 플레이어의 레벨이 20보다 높은데
		// 몬스터를 더 많이 만들어야 겠어.
		// 배열의 크기를 변경해도 가능하다.
		if (PlayLevel > 20)
		{
			MonsterCount = 30;
		}

		// 정벅바인딩은 런타임중 크기 변경이 불가능하다.
		// Monster NewArr[ArrCount];

		// 배열로 할당하는 방법
		Monster* NewMonster = new Monster[MonsterCount];

		NewMonster[0];
		NewMonster[1];
		NewMonster[2];

		// 500 번지              500번지
		Monster* NewMonsterArr = NewMonster;

		// 배열할당 삭제는 아래와 같이 한다.
		// delete[] NewMonsterArr;
	}
}
