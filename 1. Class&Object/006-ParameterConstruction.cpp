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

    Woman(std::string fn, int a)
    {
        std::cout << "Created a new woman\n";
        name = fn;
        age = a;
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
    // Cấp phát động
    Woman *hariwon = new Woman("Hariwon", 30);
    hariwon->introduce();

    std::cout << "\n";
    // Cấp phát tĩnh
    Woman minhha("Minh Ha", 25);
    minhha.introduce();
    return 0;
}