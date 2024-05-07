#include <iostream>
#include <string>

class Woman
{
public:
    std::string name;
    int age;

    // Hàm khởi tạo
    Woman()
    {
        std::cout << "Created a new woman\n";
        name = "Unknown";
        age = 0;
    }
    void introduce()
    {
        std::cout << "My name is " << name << "\n";

        std::cout << "I am " << age << " years old\n";
    }

private:
    int weight;
};

int main()
{
    Woman *hariwon = new Woman;
    hariwon->introduce();
    return 0;
}

/*
    - Hàm khởi tạo
      + Khởi tạo giá trị cho các biến thành viên
      + Tham số cho ham khởi tạo
      + Có tính chất nạp chồng hàm
    - Hàm hủy
      + Cần thu hồi vùng nhớ đã cấp phát (Heap)
      + Chỉ có tác dụng với cấp phát động
      + Khi cấp phát tĩnh thì nó sẽ thoát khi kết thúc hàm đó
      + Khi cấp phát tĩnh thì thoát scope thì nó sẽ tự thu hồi

*/
