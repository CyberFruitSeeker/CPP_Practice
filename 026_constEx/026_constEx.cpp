// 026_constEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Test(int _Value)
{

}

int main()
{

    {
        // 이건 cosnt int
        const int CValue = 0;
        int NValue = CValue;
    }

    {
        const int Value = 2;
        const int* CValue = &Value;

        // int* NValue = CValue;
        // *CValue = 1000;
        // int* NValue = CValue;
        // *NValue = 30;
    }
    {
        // Value
        // 위치 100번지
        // 크기 : 4
        // 형태 : const int
        // 값 : 2
        const int Value = 2;
        const int* CValue = &Value;
        // CValue
        // 위치 600번지
        // 크기 : 8
        // 형태 : const int*
        // 값 : 100번지
        
        // *CValue = 20;
        // 100번지에 있는 2라는 값을 20으로 수정해라
        // const 영역을 수정하라는 말이 된다.

        CValue = nullptr;
        // 600번지에 있는 100번지라는 값을 0번지로 수정해라
        const int* const CCValue = &Value;
        // const int 100번지를 수정할수 없다.
        // * const 600번지도 수정할수 없다.
        // CCValue = nullptr;

    }

    {
        int ValueTest = 10;
        Test(ValueTest);
    }
    
    {
        char Arr[100] = "Test Printf";

        printf_s(Arr);

        strcpy_s(Arr, 100, "aaaaaa");

        int a = 0;
    }
}
