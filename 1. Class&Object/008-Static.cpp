#include <iostream>
#include <string>

class Woman
{

public:
    static void work()
    {
        std::cout << "Working\n";
        std::cout << "There are " << numberOfWoman << " women\n";
    }
    static int numberOfWoman;

    std::string name;
    int age;

    Woman()
    {
        std::cout << "Created a new woman\n";
        name = "Unknown";
        age = 0;
    }

    Woman(std::string fn, int a)
    {
        std::cout << "Created a new woman\n";
        name = fn;
        age = a;
        numberOfWoman++;
    }
    void introduce()
    {
        std::cout << "My name is " << name << "\n";

        std::cout << "I am " << age << " years old\n";
    }

private:
    int weight;
};

int Woman::numberOfWoman = 0;

int main()
{
    // Cấp phát động
    Woman *hariwon = new Woman("Hariwon", 30);

    Woman::work();

    // std::cout << "Number:" << Woman::numberOfWoman << "\n";
    return 0;
}

/*
    Hàm static trong class C++
    + Không cần tạo đối tượng để gọi hàm
    + Hàm static không thể truy cập đến biến thành viên không phải static

*/