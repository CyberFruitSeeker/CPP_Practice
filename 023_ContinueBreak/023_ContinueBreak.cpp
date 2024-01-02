// 023_ContinueBreak.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	// for문이나 while문안에서 break라는 구문을 사용할수 있다.
	// 즉시 반복문을 종료하라.
	// 중단점을 걸어보는 능력은 정말 주기 힘든 능력이다.

	int Count = 0;

	while (true)
	{
		++Count;
		if (10 < Count)
		{
			break;
		}
	}

	// 스킬이 있는데.
	// 80데미지를 5번주는것이다.
	// 상대의 HP가 0 이하가 되면
	// 그냥 더 안때리기로 했다.
	int Hp = 100;
	for (int i = 0; i < 5; i++)
	{
		Hp -= 80;

		if (0 >= Hp)
		{
			break;
		}
	}

	// continue는 
	for (
		int i = 0; 
		i < 10; 
		i++
		)
	{
		// 짝수일때만 뭔가를 하고 싶어.
		// 그래서 홀수일때는 컨티뉴 할거야.
		// 홀수일때
		if (0 != (i % 2))
		{
			// 컨티뉴
			// 곧바로 증감문으로 이동하는 코드가 된다.
			continue;
		}
		
		// 짝수일때
		int a = i;
	}

	int Value = 0;

	while (
		Value < 100
		)
	{
		++Value;
		if (0 != (Value % 2))
		{
			// 컨티뉴
			// 곧바로 증감문으로 이동하는 코드가 된다.
			continue;
		}

		int a = Value;
	}
}
