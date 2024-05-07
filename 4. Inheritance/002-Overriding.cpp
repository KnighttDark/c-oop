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

    void run()
    {
        std::cout << "Vehicle is running" << std::endl;
    }

private:
    std::string modelName;
    std::string version;
};

class Taxi : public Vehicle
{

public:
    void run()
    {   // Overriding
        Vehicle::run();
        std::cout << "Taxi is running" << std::endl;
    }

private:
};

class Bus : public Vehicle
{
public:
private:
};

int main()
{

    Taxi *taxi = new Taxi();
    taxi->setModelName("Toyota");

    taxi->run();
    return 0;
}