#pragma once
#include "EngineDebug.h"

// 객체지향과 절차지향은 서로 배척하는 식의 개념이라고 오해할 수 있다.
// 그냥 각자를 가자 따로인 것으로 생각하는 것이 좋다.


class ConsoleScreen
{
public:
	void CreateScreen(int _ScreenX, int _ScreenY);
	void ReleaseScreen();
	void PrintScreen();


protected:

private:
	// 보통 초기값을 -1을 해놓는 경우가 있음
	// 초기화 되지 않았다는 것을 표현하기 위해서
	int ScreenX = -1;
	int ScreenY = -1;

	char** ScreenData = nullptr; // new int() => 이걸 언제할지를 프로그래머가 정할 수 있다.
	// 최후, 최후에 내가 원하는 순간 생성을 할 수 있다는 것
	// 사실 2차원 배열이라는 것은 인간이 편리성에 의해서 생객된 것뿐이다.
	// 왜냐하면 램이라고 하는 구조는 1차원이기 때문에
	// 프로그래머에게는 1차원의 메모리일 뿐이기 때문이다.





};

