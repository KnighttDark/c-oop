/* Thêm thuộc tính hoặc phương thức-----*/
#include <iostream>
#include <string>

class Vehicle
{

public:
    void setModelName(std::string modelName) { this->modelName = modelName; }
    void setVersion(std::string version) { this->version = version; }

    std::string getModelName() { return modelName; }
    std::string getVersion() { return version; }

    void run() { std::cout << "Vehicle is running" << std::endl; }

private:
    std::string modelName;
    std::string version;
};

class Taxi : public Vehicle
{

public:
    void run()
    {

        Vehicle::run();
        std::cout << "It's a Taxi" << std::endl;
    }

    /* Overloading-----*/
    void run(int km) { kmCounter = km; }
    int caculateFee() { return kmCounter * 10000; }

private:
    int kmCounter = 0;
};
int main()
{
    Taxi *taxi = new Taxi();
    taxi->run();
    taxi->run(100);
    std::cout << "Taxi fee: " << taxi->caculateFee() << std::endl;
    return 0;
}