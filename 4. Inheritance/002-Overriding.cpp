#include <iostream>
#include <string>
// Ghi đè
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
        Vehicle::run(); /* Overriding -----*/
        std::cout << "It's a Taxi" << std::endl;
        /* Vừa kế thừa, vừa có thể bổ sung thông tin-----*/
    }

private:
};
int main()
{
    Taxi *taxi = new Taxi();
    taxi->run();
    return 0;
}