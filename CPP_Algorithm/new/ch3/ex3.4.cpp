// 쌍의 합이 최소인 값 찾기
#include <iostream>
#include <vector>

const int INF = 20000000 // 충분히 큰 값

int main()
{
    // 입력
    int N, K;
    std::cin >> N >> K;
    std::vector<int> a(N), b(N);
    for (int i = 0; i < N; ++i) std::cin >> a[i];
    for (int i = 0; i < N; ++i) std::cin >> b[i];

    // 선형 탐색
    int min_value = INF;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            // 값이 K 미만이면 건너뛰기
            if (a[i] + b[j] < K) continue;

            // 최솟값 갱신
            if (a[i] + b[j] < min_value)
            {
                min_value = a[i] + b[j];
            }
        }
    }

    // 결과 출력
    std::cout << min_value << std::endl;
}