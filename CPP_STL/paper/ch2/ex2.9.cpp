#include <iostream>
using namespace std;

///////// Client ///////////
void Print1(int n) // 공백을 이용해 원소를 출력
{
    cout << n << " ";
}

void Print2(int n) // 각 원소를 제곱하여 출력
{
    cout << n * n << " ";
}

void Print3(int n) // 문자열과 endl을 이용해 원소를 출력
{
    cout << "정수: " << n << endl;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    for_each(arr, arr + 5, Print1); // Print1() 콜백 함수의 주소를 전달
    cout << endl
         << endl;
    for_each(arr, arr + 5, Print2); // Print2() 콜백 함수의 주소를 전달
    cout << endl
         << endl;
    for_each(arr, arr + 5, Print3); // Print3() 콜백 함수의 주소를 전달

    return 0;
}