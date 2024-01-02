// 036_OOPStart.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// int a = 0;

// 객체지향이라고 불리는 패러다임이 극혐하는것.

void DamageLogic(const int& _Att, int& _DefHp)
{
    // 축약연산자라고 부르기도 한다.
    // - 뿐만 아니라 더하기 나누기 곱하기 비트단위등등 거의 모든 연산의
    // 축약 연산자가 존재합니다.
    _DefHp -= _Att;
    // _DefHp = _DefHp - _Att;
}

void DamageRender(const char* _Name, const int& _Att)
{
    printf_s("%s 가 %d의 공격력으로 공격했습니다.\n", _Name, _Att);
}

void Damage(const char* _Name, const int& _Att, int& _DefHp)
{
    DamageRender(_Name, _Att);
    DamageLogic(_Att, _DefHp);
}

int main()
{
    int MonsterHp = 50;
    int MonsterAtt = 5;

    //private함이 무엇이냐?
    // 객체지향 전역이라는 개념이 존재하면 안됩니다.
    // 모든건 개념안에 묶여있어야 한다.
    // 절자지향은 전역함수 만들어서 공식을 만들면 됩니다.
    // rand
    // 객체지향 => 
    // 수학 => 난수
    int Value = 200;
    int Value2 = 30;
    DamageLogic(Value, Value2);

    // OOP => 객체지향이라고 부릅니다.
    // 객체지향은 객체를 지향해하는데.
    // 다음강의에서 객체란 무엇인가 알아보자.
}
