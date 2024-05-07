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

protected:
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
    void start()
    {
        std::cout << "Started....Ready to run \n";
        run();
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

    taxi->start();

    return 0;
}