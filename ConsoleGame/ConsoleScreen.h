#pragma once
#include <iostream>
#include ".\Math.h"
//#include "..\AAAA.h"

// ��Ų��� �߾�� �˷��ش�� �߾��. => ���� �ϸ� �ȵǴ¸�.

// ���������� ������ ���þ���
// �̸��� ���� �ִٸ� �װ��� ����� �� �ִ�.
const int ScreenX = 20;
const int ScreenY = 12;
const int ScreenXHalf = ScreenX / 2;
const int ScreenYHalf = ScreenY / 2;

class ConsoleScreen
{
public:
	// �����ڸ� ����ٴ°���
	// ���� ���� ������ �������θ� �����ض�.
	ConsoleScreen(char _BaseChar)
	{
		// [*][*][*][*][*][0]
		// [*][*][*][*][*][0]
		// [*][*][*][*][*][0]
		// [*][*][*][*][*][0]
		// [*][*][*][*][*][0]

		BaseCh = _BaseChar;

	}

	void PrintScreen()
	{
		for (int y = 0; y < ScreenY; y++)
		{
			char* Ptr = Arr[y];
			printf_s(Ptr);
			printf_s("\n");
		}
	}

	void ClearScreen()
	{
		system("cls");

		for (int y = 0; y < ScreenY; y++)
		{
			for (int x = 0; x < ScreenX - 1; x++)
			{
				Arr[y][x] = BaseCh;
			}
		}
	}

	void SetPixel(const int2& _Position, char _Char)
	{
		SetPixel(_Position.X, _Position.Y, _Char);
	}

	void SetPixel(int _X, int _Y, char _Char)
	{
		Arr[_Y][_X] = _Char;
	}

protected:

private:
	char Arr[ScreenY][ScreenX] = { 0, };
	char BaseCh = ' ';
	// [0][0][0][0][0][0]
	// [0][0][0][0][0][0]
	// [0][0][0][0][0][0]
	// [0][0][0][0][0][0]
	// [0][0][0][0][0][0]
};
