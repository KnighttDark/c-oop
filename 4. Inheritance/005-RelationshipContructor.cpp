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

    Vehicle()
    {
        std::cout << "Vehicle is created \n";
    }

    Vehicle(std::string name)
    {
        modelName = name;
        std::cout << "Created a vehicle with name:" << modelName << "\n";
    }
    void run()
    {
        std::cout << "Vehicle is running \n";
    }

private:
    std::string modelName;
};

class Taxi : public Vehicle
{
public:
    Taxi(std::string name) : Vehicle(name)
    {
        std::cout << "Taxi is created \n";
    }

    void start()
    {
        std::cout << "Started....Ready to run \n";
        Vehicle::run();
    }

private:
};

class Bus : public Vehicle
{
};

int main()
{
    Taxi *taxi = new Taxi("Toyota");
    Taxi *taxi2 = new Taxi("Suzuki");
    taxi->start();
    return 0;
}