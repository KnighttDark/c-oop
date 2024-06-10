#include <iostream>
#include <string>
class Woman
{
public:
    std::string name;
    int age;
    Woman() /* Constructor--------*/
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
    ~Woman() /* Destructor--------*/
    {
        std::cout << "Deleted a woman\n";
    }
    void Introduce()
    {
        std::cout << "My name is " << name << "\n";
    }

private:
    int weight;
};

int main()
{
    Woman *hariwon = new Woman("Hariwon", 30);
    hariwon->Introduce();
    std::cout << "\n";
    delete hariwon;
    /* Destructor--------*/
    return 0;
}