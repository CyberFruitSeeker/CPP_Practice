// 049_this.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 플레이어
class Player 
{
private:
    int Att = 10;
    int Hp = 100;

public:
    // 자신을 호출한 객체의 포인터를 첫번째 인자로 받습니다.
    void __thiscall Damage(/*Player* const _this,*/ int _Damage)
    {
        // 자기 클래스안에서는 다 public입니다.
        // player클래스의 맴버함수 안에 Player가 들어왔다.
        // 그럼 그게 자기 자신인지 아닌지 확인할 방법이
        //_this->Hp = 20;
        //if (_this != this)
        //{

        //}
        
        // _this->Hp -= _Damage;

        // 포인터 뒤 const이기 때문에 자기자신의 주소값을 바꿀수 없다.
        // this = nullptr;

        // 앞에 존재한다는걸 잊으면 안됩니다.
        /*this->*/Hp -= _Damage;
    }
};

// 첫번째인자로 뭐가 들어오나요?
// 자기자신의 포인터
//void Damage(Player* const this, int _Damage)
//{
//    Hp -= _Damage;
//}


// 문법적으로는 차이점이 있지만
// 결과적으로는 차이점이 없다는걸 이해해야 한다.
void Damage(Player* const _this, int _Damage) 
{
    if (nullptr == _this)
    {
        return;
    }
    // 클래스를 포인터로 사용할때는
    // .이 아니라 ->
    // _this = nullptr;
    // _this->Hp -= _Damage;
}

int main()
{
    const int CValue = 0;
    // 위치 100번지
    // 크기 4
    // 형태 const int
    // 값 0

    // 100번지의 값을 20으로 바꿔라
    // 불가능. const 붙였음.
    // CValue = 20;

    const int* const CPtr = &CValue;
    // 위치 150번지
    // 크기 8
    // 형태 const int*
    // 값 100번지

    // 150번지의 값을 0번지로 바꿔라.
    // 왜 가능 const int =>를 바꾸지 말라는거죠?
    // 150번지의 값을 바꾸지 말라는 뜻이
    // 자료형* const <= 포인터를 const로 만들라는 의미가 됩니다.
    // CPtr = nullptr;

    {
        // 3개의 자료형은 완전히 동일하다.
        int const Value0 = 20;
        const int Value1 = 20; // <= 이것만 사용합니다.
        const int const Value2 = 20;
    }

    {
        const int Test = 0;
        // 위치 180번지
        // 크기 4
        // 형태 int
        // 값 0

        // 3개의 자료형은 완전히 동일하다.
        // int const* const  Value0 = nullptr;
        const int* const  Value1 = &Test; // <= 이것만 사용합니다.
        // 위치 200번지
        // 크기 8
        // 형태 const int* const 
        // 값 180번지

        // 180번지의 값을 100으로 바꿔라.
        // (const int)* const
        // *Value1 = 200;

        // 200번지의 값을 0번지으로 바꿔라.
        // const int(* const)
        //  Value1 = nullptr;

        // const int const* const  Value2 = nullptr;
    }

    // const 자료형 const * const

    // 값을 변경하는 일이 불가능하다.
    // *CPtr = 100;
    
    // CValue = 100;

    Player NewPlayer0 = Player();
    Player NewPlayer1 = Player();

    NewPlayer0.Damage(&NewPlayer1, 10);
    NewPlayer1.Damage(&NewPlayer0, 20);

    int a = 0;
    // std::cout << "Hello World!\n";
}
