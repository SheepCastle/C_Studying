// 최솟값 구하기
#include <iostream>
#include <vector>

const int INF = 2000000; // 충분히 큰 값을 설정

int main()
{
    // 입력 받기
    int N;
    std::cin >> N;
    std::vector<int> a(N);
    for (int i = 0; i < N; ++i) std::cin >> a[i];

    // 선형 탐색
    int min_value = INF;
    for (int i = 0; i < N; ++i)
    {
        if (a[i] < min_value) min_value = a[i];
    }

    // 결과 출력
    std::cout << min_value << std::endl;
}