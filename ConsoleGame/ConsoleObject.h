#pragma once
#include "Math.h"

// �ڽĵ��� ���������� �������� ����� ����� ���� �Ѵ�.
class ConsoleObject
{
public:
	ConsoleObject();
	ConsoleObject(const int2& _StartPos, char _RenderChar);
	~ConsoleObject();

	int2 GetPos();
	char GetRenderChar();
	void SetPos(const int2& _Pos);

protected:
	int2 Pos = { 0, 0 };
	char RenderChar = '@';
};

