// 011_Castring.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void TestFunction()
{
    int Value = 0;
    __int64 Address1 = reinterpret_cast<__int64>(&Value);
}

int main()
{
    {
        // 1. 자료형이 다르면 대입이 되면 안되야 한다 => 기본 생각. 
        // => 그냥 무조건 안되게 만들어야 한다.
        // 2. C and C++ => 자료형이 무슨의미야?
        // => 모든건 어차피 바이트 덩어리인데?
        // 2. 그런데 될때가 있고 안될때가 있다.

        // 1바이트 문자형
        // 0b00000000
        // char 
        // 1바이트 논리형
        // 0b00000000
        // bool

        int Value = 0;

        // C++ 자료형이 다를때는 일반적으로 대입이 안되야 한다를 지켜진 모습.
        // int* ValuePtr = Value;
        bool Check = Value;

        // Addres000 0b0000000000000000000000000000000000000000000000000000000000000000
        // Value     0b00000000000000000000000000000000
        __int64 Addres000 = Value;
        Addres000 = 312893789123789;
        // 이건 그냥 됐다. => 자료의 변형이 일어난 것을 확인할수 있다.
        Value = Addres000;

        // 해도 자료형이 됐는데 대입했다 => 어떤일이 벌어지는 내가 확실히 알고. 해야한다.

        int Size__int64 = sizeof(__int64);
        int Sizeint = sizeof(int);

        // 일반적으로 자료형은 정식적인 캐스팅이라는 것을 통해서 변경해야 한다.
        //           __int64    int
        // __int64 Addres000 = Value; <= 자료형이 다른데 대입이 문법적으로 허용되는 것을
        // 암시적 형변환이라고 한다.
        // 암시적 형변환은 최대한 피하겠습니다.

        // C스타일 형변환이 있고
        // C++스타일 형변환이 있습니다.
        // 명시적 형변환이라고 합니다.
    }

    // C스타일 캐스팅 방식
    {
        // C스타일 형변환
        // 저는 
        int Value = 100;
        bool Check = (bool)Value;
        Value = (int)Check;

        int a = 0;
    }

    // C++에는 참조형과 값형이 있는데.
    // 값 <=> 값
    // 포인터와 레퍼런스등을 참조형이라고 하고
    {
        int Value = 100;
        bool Check = static_cast<bool>(Value);
        Value = static_cast<int>(Check);
        int a = 0;
    }

    // C++에는 참조형과 값형이 있는데.
    // 값형 <=> 참조형
    {
        int Value0 = 100;
        int Value1 = 999;
        int* Ptr = &Value0;

        __int64 Address0 = reinterpret_cast<__int64>(Ptr);
        __int64 Address1 = reinterpret_cast<__int64>(&Value0);
        __int64 Address2 = reinterpret_cast<__int64>(&Value1);
    }

    
    {
        int Value = 0;
        __int64 Address1 = reinterpret_cast<__int64>(&Value);
        TestFunction();
    }

    std::cout << "Hello World!\n";
}
