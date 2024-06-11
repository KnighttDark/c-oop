#include <iostream>
#include <string>

class Vehicle
{

public:
    void setModelName(std::string modelName) { this->modelName = modelName; }

    std::string getModelName() { return modelName; }

    ~Vehicle() { std::cout << "Delete vehicle \n"; }

private:
    std::string modelName;
};

class Taxi : public Vehicle
{
public:
    ~Taxi() { std::cout << "Delete taxi \n"; }

private:
};

int main()
{
    Taxi *taxi = new Taxi();
    delete taxi;
    return 0;
}

/*Output:-----*/
/*
    Delete taxi
    Delete vehicle
*/