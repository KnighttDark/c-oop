/*
    Interface là gì ?
    - Interface là một class chỉ chứa các pure virtual function.
    - Lớp dẫn xuất phải định nghĩa lại

*/
#include <iostream>
#include <string>

class Vehicle // Abstract class
{
public:
    // Pure virtual
    virtual void run() = 0;
    virtual void setModelName(std::string modelName) = 0;
    virtual std::string getModelName() = 0;

protected:
    std::string modelName;
};

class Car : public Vehicle
{
public:
    Car() {}
    void setModelName(std::string modelName) override
    {
        this->modelName = modelName;
    }

    std::string getModelName() override
    {
        return modelName;
    }

    void run() override
    {
        std::cout << "Car is running" << std::endl;
    }
};

int main()
{

    Car *car = new Car();
    car->run();

    return 0;
}
