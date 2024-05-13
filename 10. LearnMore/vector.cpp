#include <iostream>
#include <string>
#include <vector>

int main()
{

    // Cú pháp: vector<kiểu_dữ_liệu> tên_vector
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_back(6); // Thêm phần tử vào cuối vector

    for (int i = 0; i < numbers.size(); i++)
    {
        std::cout << numbers[i] << " ";
    }

    numbers.pop_back(); // Xóa phần tử cuối cùng của vector
    std::cout << "\n";

    for (int number : numbers)
    {
        std::cout << number << " ";
    }

    return 0;
}