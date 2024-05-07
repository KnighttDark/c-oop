#include <iostream>
#include <string>

class Student
{
public:
    std::string name;

    void Introduce()
    {
    }

    void Infor()
    {
    }

private:
    int age;
};

int main()
{
    Student *s1 = new Student;
    s1->name = "Tran Dang Thanh";

    std::cout << s1->name << std::endl;

    return 0;
}

/*
    Cấp phát tĩnh:
        + Kích thước của mảng hoặc đối tượng tĩnh được xác định tại thời điểm biên dịch
        và không thể thay đổi trong quá trình chạy
        + Được cấp vùng nhớ trong vùng nhớ Stack, dung lượng nhỏ ~1Mb
        + Tốc độ truy cập nhanh hơn
        + Thường được cấp phát cho các biến nguyên thủy( int, bool, char,...)

    Cấp phát động:
        + Kích thước của mảng hoặc đối tượng động có thể được xác định
        và thay đổi trong quá trình chạy của chương trình.
        + Được cấp vùng nhớ trong vùng nhớ Heap, dung lượng lớn
        + Tốc độ truy cập chậm hơn
        + Thường được cấp phát cho các biến kiểu dữ liệu phức tạp như mảng, struct, class
*/
