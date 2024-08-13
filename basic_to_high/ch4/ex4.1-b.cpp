#include <iostream>

const int var = 1;
#define Version 1;
#define Version1;

int main()
{
    // 하기 식별자는 변수로 #define으로 정의 되어 있지 않기 때문에 해당 라인 미포함
    #ifdef var
        std::cout << "Print : var \n";
    #endif
    
    // 하기 식별자가 정의되어 있어 해당 라인 포함됨
    #ifdef Version // 이것은 #if defined Version 같음
        std::cout << "Defined Version \n";
    #endif

    // 여러 식별자들이 정의되어 있는지를 and 조건을 사용한 지시문
    #if defined Version && defined Version1
        std::cout << "defined Version and Version1 \n";
    #endif

    return 0;
}