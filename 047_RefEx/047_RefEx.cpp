// 047_RefEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Test 
{
public:
    // 이런식으로 클래스 내부에 레퍼런스가 있다면

    // 레퍼런스는 무조건 초기화를 피할수가 없다.
    // 즉 int&를 사용했다면 int가 하나 필요한것과 같다.
    // 리터럴 초기화는 불가능에 가깝고.
    int Value = 0;
    
    // 이렇게 사용한건 당연히 멍청한 짓이다.
    int& Ref;

    int* Ptr = nullptr;

public:
    Test(int& _Ref) 
        : Ref(_Ref)
    {

    }// _Ref 파괴됩니다.


};

int main()
{
    {
        int Value0 = 0;
        //// 레퍼런스는 무조건 초기화를 피할수가 없다.
        //// 즉 int&를 사용했다면 int가 하나 필요한것과 같다.
        int& Ref = Value0;

        int Value1 = 2;
        // 레퍼런스는 참조(초기화) 대상을 바꿀수 없다.
        Ref = Value1;

        Ref = 50;
    }

    {
        int Value = 20;
        Test NewTest = Test(Value);
    }
}
