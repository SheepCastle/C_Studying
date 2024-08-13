#include <iostream>

const int var = 1;
#define Version 1

int main()
{
    // 수식이 상수 1을 나타내어 해당 라인이 포함됨
    // 수식이 제로를 제외하고 모두 해당라인이 포함됨
    #if 1
        std::cout << "Print!!!\n";
    #endif

    // 변수를 수식에 두면 처리 시 무시가 되어 해당 라인 미포함
    #if var
    std::cout << "Print : var";
    #endif

    // 수식이 다른 지시문 #define으로 설정되었고 조건이 1이기 때문에 라인 포함
    #if Version
        std::cout << "Print : Version \n";
    #endif
    
    // 여러 조건에 따른 조건 지시문 사용
    #if Version == 1
        std::cout << "Version = 1";

    #elif Version == 2
        std::cout << "Version = 2";
    #else
        std::cout << "Version else";
    #endif

    return 0;
}