#include <iostream>
#include <string>

class Message;
// nếu thuộc tính của Object là 1 con  và trỏ đến vùng nhớ động thì phải delete trong hàm hủy
class Woman
{
public:
    std::string name;
    int age;

    Message *msg;

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
    ~Woman()
    {
        std::cout << "Deleted a woman\n";
        delete msg;
    }
    void introduce()
    {
        std::cout << "My name is " << name << "\n";

        std::cout << "I am " << age << " years old\n";
    }

private:
    int weight;
};

void test()
{
    Woman somebody;
}

int main()
{
    // Cấp phát động
    Woman *hariwon = new Woman("Hariwon", 30);
    hariwon->introduce();

    std::cout << "\n";
    // Cấp phát tĩnh
    //     Woman minhha("Minh Ha", 25);
    //     minhha.introduce();

    // Hàm hủy
    delete hariwon;

    test();
    // Khi cấp phát tĩnh thì không cần gọi delete mà nó tự động gọi
    // Khi cấp phát động thì mình phải có nhiệm vụ thu hồi vùng nhớ đó

    return 0;
}