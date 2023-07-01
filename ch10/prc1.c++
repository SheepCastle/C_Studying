#include <iostream>
using namespace std;

int n = 0;
namespace A {
    int n = 0;
    namespace B {
        void set() { n = 10 ; }
        int n = 0;
    }
}
namespace C {
    void set();
    int n = 0;
}
void C::set() { n = 20; }

int main() {
    using namespace A::B;

    set();
    C::set();

    cout << ::n << endl;
    cout << A::n << endl;
    cout << A::B::n << endl;
    cout << C::n << endl;
}

// 위 코드를 실행했을 때의 출력 결과를 예측해 보세요.
// 편의상 답안은 가로로 쭉 적도록 하겠다.
// 양성:
// 0, 0, 10, 20
// 결과:
// 0, 10, 0, 20