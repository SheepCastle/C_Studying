// 선형 탐색법
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 입력
    int N, v;
    cin >> N >> v;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    // 선형 탐색
    bool exist = false; // false를 초깃값으로
    for (int i = 0; i < N; ++i)
    {
        if (a[i] == v)
        {
            exist = true; // 발견하면 플래그 설정
        }
    }

    // 결과 출력
    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl;
}