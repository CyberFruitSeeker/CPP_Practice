// 030_PointerEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//            500      508
void Function(int********* ptr, int _Value)
{
    //      500
    __int64 Address = reinterpret_cast<__int64>(&ptr);
    // char* IPtr = reinterpret_cast<char*>(&ptr);
    // IPtr = IPtr + 8;

    Address = Address + 8;

    int* ValuePtr = reinterpret_cast<int*>(Address);

    int a = 0;

}

int main()
{

    {
        // 00000001 001010101 001010101 001010101
        bool Check = true;





        char* Ptr = reinterpret_cast<char*>(&Check);

        char a = *Ptr;

        int b = 0;

    }

    {

        // 여러분들이 생각하기에 
        // 0b00000000 00000000 00000000 00000001

        // 100번지
        int Value = 1;

        // 150번지에 있는 100번지
        char** Ptr = reinterpret_cast<char**>(&Value);
        char* Ptr2 = reinterpret_cast<char*>(Ptr);
        int* Ptr3 = reinterpret_cast<int*>(Ptr);
        __int64 Address = reinterpret_cast<__int64>(Ptr);

        *Ptr3 = 20;

        Function(nullptr, 20);

        printf_s("%d", true);

        std::cout << "Hello World!\n";
    }
}
