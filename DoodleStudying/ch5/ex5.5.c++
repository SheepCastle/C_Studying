#include <stdio.h>

int main() {
    int n;
    int arr[1000];

    printf("입력할 숫자의 개수 : ");
    scanf("%d", &n);
    printf("숫자를 %d개 입력하세요 : ", n);
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    printf("최댓값 : %d\n", max);
}