#include "ConsoleScreen.h"
#include <iostream>
#include <Windows.h>
#include <assert.h>


void ConsoleScreen::CreateScreen(/*&NewScreen => this, */int _ScreenX, int _ScreenY)
{
	ReleaseScreen();

	if (0 >= _ScreenX)
	{
		MsgBoxAssert("스크린 X크기가 0이기 때문에 콘솔 스크린을 만들수 없습니다");
	}

	if (0 >= _ScreenY)
	{
		MsgBoxAssert("스크린 Y크기가 0이기 때문에 콘솔 스크린을 만들수 없습니다");
	}

	/*this->*/ScreenX = _ScreenX;
	/*this->*/ScreenY = _ScreenY;

	ScreenData = new char* [ScreenY];

	for (int y = 0; y < ScreenY; y++)
	{
		ScreenData[y] = new char[ScreenX + 2] {0, };

		for (int x = 0; x < ScreenX; x++)
		{
			ScreenData[y][x] = '*';
		}

		ScreenData[y][ScreenX] = '\n';
		
	}


	// 함수가 실행되면 스택에 그 함수 이름의 메모리를 그리면
	// 맴버함수는 실행되면 내부에 this가 있다는것을 기억해야 한다.

	for (int y = 0; y < ScreenY; y++)
	{
		printf_s(ScreenData[y]);
	}

	// printf_s(ScreenData);



	// 2x2 배열을 메모리가 1차원으로 처리하는 방식
	// [*][*][\n][*][*][\n][0]

	//**
	//**

	// 문자열은 어떻게 출력될까?
	// "**"\n
	// "**"0



}

void ConsoleScreen::ReleaseScreen()
{
	// 지울때는 역순으로
	for (int y = 0; y < ScreenY; y++)
	{

	}
}

void ConsoleScreen::PrintScreen()
{

}