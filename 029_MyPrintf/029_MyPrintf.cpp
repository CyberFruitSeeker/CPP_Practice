// 029_MyPrintf.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


int StringCount(const char* const _Ptr)
{
	int Count = 0;
	while (_Ptr[Count])
	{
		char Ch = _Ptr[Count];
		++Count;
	}
	return Count;
}

void NumberToString(int Number, char* _Ptr)
{
	// 어떤 함수든 원본값을 보존해 놓는게 좋습니다.
	int CalNumber = Number;
	int NumberCount = 0;
	const char* CPtr = _Ptr;

	while (CalNumber)
	{
		CalNumber /= 10;
		++NumberCount;
	}

	int Mul = 1;
	// pow라는 함수가 이미 있어요.
	for (int i = 0; i < NumberCount - 1; i++)
	{
		Mul *= 10;
	}

	int Value = 0;
	CalNumber = Number;

	for (int i = 0; i < NumberCount; i++)
	{
		// 0나누기가 허용되지 않는다.
		Value = CalNumber / Mul;
		_Ptr[i] = Value + '0';
		CalNumber -= Value * Mul;
		Mul /= 10;
	}
}

int MyPrintf(const char* const _Format, ...)
{
    // 500
    // 그냥 사용하면 500번지
    __int64 AddRess = reinterpret_cast<__int64>(& _Format);
    AddRess = AddRess + 8;

    int Count = 0;
    while (_Format[Count])
    {
        char Ch = _Format[Count];

        // 포맷팅이 아닐경우 글자를 출력하고 다시 반복한다.
        if ('%' != Ch)
        {
            putchar(_Format[Count]);
            ++Count;
            continue;
        }

        // 포매팅 문자인 %를 만났을 경우.

        char NextCh = _Format[Count + 1];

        switch (NextCh)
        {
        case 'd':
        {
            int* Ptr = reinterpret_cast<int*>(AddRess);

            char Arr[100] = {};

            NumberToString(*Ptr, Arr);

            int Index = 0;
            while (Arr[Index])
            {
                putchar(Arr[Index]);
                ++Index;
                ++Count;
            }

            // 인자를 끌어내야합니다.

            break;
        }
        default:
        {
            int a = 0;
            break;
        }
        }

    }

    return Count;
}

int main()
{
    // int Value = printf_s("%d", 123456);

    // 400번지에있는 100이라는 값이
    int Value = 100;

    // int NewValue = &Value;

    {
        int Return = MyPrintf("%d", 123);
        int a = 0;
    }
}
