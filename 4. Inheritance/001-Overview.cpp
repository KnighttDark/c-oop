#include <iostream>
#include <string>

class Vehicle
{

public:
    void setModelName(std::string modelName)
    {
        this->modelName = modelName;
    }

    std::string getModelName()
    {
        return modelName;
    }

    void setVersion(std::string version)
    {
        this->version = version;
    }

    std::string getVersion()
    {
        return version;
    }

private:
    std::string modelName;
    std::string version;
};

class Taxi : public Vehicle
{
};

class Bus : public Vehicle
{
};

int main()
{

    Taxi *taxi = new Taxi();
    taxi->setModelName("Toyota");
    taxi->setVersion("2020");
    std::cout << "Taxi Model Name: " << taxi->getModelName() << std::endl;
    return 0;
}