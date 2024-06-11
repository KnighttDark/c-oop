#include <iostream>
#include <string>

class Vehicle
{

public:
    void setModelName(std::string modelName) { this->modelName = modelName; }
    std::string getModelName() { return modelName; }
    Vehicle() { std::cout << "Create vehicle \n"; }

private:
    std::string modelName;
};

class Car : public Vehicle
{
public:
    Car() { std::cout << "Create car \n"; }

private:
    std::string ownerName;
};

class Taxi : public Car
{
public:
    Taxi() { std::cout << "Create taxi \n"; }

private:
};

int main()
{
    Taxi *taxi = new Taxi();
    delete taxi;
    return 0;
}

/* Kế thừa đa mức----*/
