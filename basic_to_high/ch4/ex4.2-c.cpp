#include <iostream>

// 상수 및 문자열을 매크로 처리
#define ARRAY_SIZE 5
#define VERSION "1.1"

// 정의된 매크로를 다른 매크로에 사용함
#define WIDTH 80
#define LENGTH (WIDTH + 10)

// 같은 매크로이름에 서로 다른 대체 리스트 정의. 재정의에 대한 경고 메시지가 나올 수 있음.
#define MY_DATA 1
#define MY_DATA 0

int main()
{
    // 배열 크기에 사용됨
    int array[ARRAY_SIZE];

    // 버전 출력
    std::cout << VERSION << "\n";
    
    // 하기는 (80 + 10) * 10 = 900으로 대체되어 계산됨
    // 만약에 괄호를 사용치 않고 정의하면 #define LENGTH WIDTH + 10
    // 80 + 10 * 10 = 180으로 계산되어 결과가 달라짐.
    std::cout << LENGTH * 10; // 출력: 900

    return 0;
}