#include <stdio.h>

// I: 변수 이름, S: 시작 수, E: 끝 수
#define FOR(I,S,E) for (int I = S; I <= E; I++)

int main() {
    FOR(i, 1, 10) {
        printf("%d ", i);
    }
}