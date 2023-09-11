#include <iostream>
using namespace std;

class Adder
{
    int total;
public:
    explicit Adder(int n = 0) : total(n) { } // 종종 까먹어서 다시 작성 explict은 class에서 암시적 형변환이 일어나지 못하게 막는 역할을 한다.
    int operator() (int n)
    {
        return total += n;
    }
};

int main()
{
    Adder add(0); // 초깃값 0

    cout << add(10) << endl; // 10을 누적 => 10
    cout << add(20) << endl; // 20을 누적 => 30
    cout << add(30) << endl; // 30을 누적 => 60

    return 0;
}