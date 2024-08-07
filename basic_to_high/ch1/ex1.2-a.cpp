#include <iostream>

int i = 1; // 파일 전체에 영향을 주는 전역 변수

int main()
{
    // 사용 시점에서 i가 해당 블록 위에 없어 다음 상위 블록에 있는 전역 변수를 찾음
    std::cout << "i value = " << i << "\n"; // 출력 i value = 1

    int i = 10; // main 함수 마지막 부분까지 범위를 가짐

    // 블록 내에 있는 바로 위 i를 참조함
    std::cout << "i value = " << i << "\n"; // 출력 i vaule = 10

    {
        int i = 100;
        // 해당 블록 내에 i 검색
        std::cout << "i value = " << i << "\n"; // 출력 i value = 100
    }

    { 
        //해당 블록에 없어 다음 상위 블록에서 i를 찾음.
        std::cout << "i value = " << i; // 출력 i value = 10
    }
}