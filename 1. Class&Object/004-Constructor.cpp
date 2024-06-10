#include <iostream>
#include <string>

class Woman
{
public:
    std::string name;
    int age;
    Woman()
    {
        std::cout << "Created a new woman\n";
        name = "Unknown";
        age = 0;
    }
    void Introduce()
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
    hariwon->Introduce();
    return 0;
}
