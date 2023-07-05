#include <iostream>
using namespace std;

namespace castle {
    int m, n;
    void set();
    namespace google {
        int n;
        void set();
    }
}

void castle::set() {
    n = 20;
}

void castle::google::set() {
    m = 30;
    n = 40;
}

int main() {
    castle::set();
    castle::google::set();

    cout << castle::m << endl;
    cout << castle::n << endl;
    cout << castle::google::n << endl;
}