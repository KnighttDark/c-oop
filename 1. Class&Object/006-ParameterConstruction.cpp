#include <iostream>
#include <string>

class Woman
{
public:
    std::string fullName;
    int age;
    Woman()
    {
        std::cout << "Created a new woman\n";
        fullName = "Unknown";
        age = 0;
    }

    Woman(std::string fn, int a) : fullName(fn), age(a)
    {
        std::cout << "Created a new woman\n";
    }
    void introduce() {}

private:
    int weight;
};

int main()
{
    Woman *hariwon = new Woman("Hariwon", 30);
    hariwon->introduce();
    std::cout << "\n";

    return 0;
}