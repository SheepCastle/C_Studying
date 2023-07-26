#include <iostream>
#include <array>
using namespace std; 

void print(array<int, 5> arr)
{
    for (auto ele : arr)
        std::cout << ele << ", ";
}

int main() {
    array<int, 10> arr1; // 크기가 10인 int형 배열 선언

    arr1[0] = 1; // 배열의 첫 번째 원소에 1 대입
    cout << "arr1 배열의 첫 번째 원소: " << arr1[0] << endl; // arr1 배열의 첫 번째 원소: 1

    array<int, 4> arr2 = {1, 2, 3, 4};
    cout << "arr2의 모든 원소";

    for (int i = 0; i < arr2.size(); i++)
        cout << arr2[i] << " ";
    cout << endl;

    // at()함수가 []연산자보다 조금 느리지만 index의 값이 유효하지 않으면 예외를 발생시키기 때문에 잘 활용하면 아래와 같은 예외 처리 코드를 만들 수 있다.
    array<int, 4> arr3 = {1, 2, 3, 4};

    try
    {
        cout << arr3.at(3) << endl; // 에러 아님
        cout << arr3.at(4) << endl; // std::out_of_range 예외 발생
    }
    catch (const std::out_of_range& ex)
    {
        cerr << ex.what() << endl;
    }

    array<int, 5> arr = {1, 2, 3, 4, 5};
    print (arr); // 1, 2, 3, 4, 5,
}