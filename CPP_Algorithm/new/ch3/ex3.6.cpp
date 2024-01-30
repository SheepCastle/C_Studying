// 부분합 문제를 비트를 사용해서 푸는 전체 탐색법
#include <iostream>
#include <vector>

int main()
{
    // 입력
    int N, W;
    std::cin >> N >> W;
    std::vector<int> a(N);
    for (int i = 0; i < N; ++i) std::cin >> a[i];

    // bit는 2^N개 존재하는 부분 집합 전체를 대상으로 동작
    bool exist = false;
    for (int bit = 0; bit < (1 << N); ++bit)
    {
        int sum = 0; // 부분 집합에 포함된 요소의 합
        for (int i = 0; i < N; ++i)
        {
            // i번째 요소 a[i]가 부분 집합에 포함되는지 여부
            if (bit & (1 << i))
            {
                sum += a[i];
            }
        }

        // sum이 W와 일치하는지 여부
        if (sum == W) exist = true;
    }

    if (exist) std::cout << "Yes" << std::endl;
    else std::cout << "No" << endl;
}