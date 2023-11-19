#include <iostream>
#include <array>

int main() {

    // std::array는 메모리를 자동으로 할당하고 해제함
    std::array<int, 10> arr1;

    arr1[0] = 1;
    std::cout << "arr1's first element : " << arr1[0] << std::endl;

    std::array<int, 4> arr2 = {1, 2, 3, 4};
    std::cout << "arr2's every element : ";
    for (int i = 0; i < arr2.size(); i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}