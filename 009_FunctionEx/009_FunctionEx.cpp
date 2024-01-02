// 009_FunctionEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 함수의 리턴값 쪽에 자료형을 넣는것과 아닌것의 차이에 대해서 알아봅시다.
int Test()
{
    int b = 0;

    // 함수를 종료하고 만약 리턴할 값이 있다면 외부에 리턴한다.
    return 10;

    int a = 0;
}

// 인자란 외부의 값을 복사받아서 내부에서 사용하는것을 의미한다.
void ParameterStart(int Value)
{
    Value = 99999;
}

// 함수의 인자는 n개 넣을 수 있다.
// 행동이 행동이 아니다.
int Damage(int _Hp, int _Att)
{
    _Hp = _Hp - _Att;
    return _Hp;
}

// 리턴값이라는것이 무엇인지 알아보자.
// 리턴 이라는 용어가 무엇인지 알아보자.
int main()
{
    {
        int Left = 1;
        // 위치 : main실행 스택안에 들어있다.
        // 위치 : 100번지
        // 크기 : 4
        // 형태 : 정수
        // 값   : 1

        int Right = 1;
        // 눈에 보이지 않는 +의 결과값이 존재한다는 걸
        // 우린 알고 있죠?
        // 이런 값들을 RValue라고 합니다.
        // (Left + Right) = 20;

        // 여기는? 
        Left = Test();
    }

    {
        int TestValue = 10;
        ParameterStart(TestValue);
        int a = 0;
    }

    {
        int MonsterHp = 100;
        MonsterHp = Damage(MonsterHp, 10);
    }
}
