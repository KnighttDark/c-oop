#include <iostream>
#include <string>

class BodySize
{
public:
    int bodySize[3];
    float weight;
};
class Woman
{
public:
    std::string fullName;
    BodySize bodySize;
    void makeUp() {}

    void Introduce() { std::cout << "Hi! My name is Thanh"; }
};

int main()
{
    Woman *harriwon = new Woman;
    harriwon->Introduce();
    return 0;
}
