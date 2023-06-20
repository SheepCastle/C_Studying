#include <stdio.h>

void rec() {
    printf("rec() 호출됨\n");
    rec();
}

int main() {
    rec();
}

