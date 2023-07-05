#include <iostream>
using namespace std;

namespace castle {
    int n;
    void set() {
        n = 20;
    }
}

namespace google {
    void set() {
        castle::n = 30;
    }
}

int main() {
    castle::set();
    cout << castle::n << endl;
    
    google::set();
    cout << castle::n << endl;
}