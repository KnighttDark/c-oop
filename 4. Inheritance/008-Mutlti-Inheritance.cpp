#include <iostream>
#include <string>

class Vehicle
{

public:
    void setModelName(std::string modelName) { this->modelName = modelName; }

    std::string getModelName() { return modelName; }

    void run() { std::cout << "Vehicle is running\n"; }

private:
    std::string modelName;
};

class House
{
public:
    void setArea(float area) { this->area = area; }
    float getArea() { return area; }

private:
    float area;
};
// Đa kế thừa
class Mobihome : public Vehicle, public House
{
public:
private:
};

int main()
{
    Mobihome *mobihome = new Mobihome();
    mobihome->run();

    mobihome->setArea(100);
    std::cout << "Area: " << mobihome->getArea() << std::endl;

    return 0;
}
// Đa kế thừa
// Một thằng con nhưng có thể kế thừa được nhiều ông
/*
    + Lỗi nhọc nhằn: 2 classParent có chung hàm giống nhau
    + Dimond inheritance
*/
