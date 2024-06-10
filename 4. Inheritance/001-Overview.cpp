#include <iostream>
#include <string>

class Vehicle
{
public:
    Vehicle() {}
    Vehicle(std::string modelName, std::string version) : modelName(modelName), version(version) {}

    void setModelName(std::string modelName) { this->modelName = modelName; }
    void setVersion(std::string version) { this->version = version; }
    std::string getModelName() { return modelName; }
    std::string getVersion() { return version; }

private:
    std::string modelName;
    std::string version;
};
class Taxi : public Vehicle
/* Inheritance -----*/
{
public:
private:
};
int main()
{

    Taxi *taxi = new Taxi();
    taxi->setModelName("Toyota");
    taxi->setVersion("2020");
    std::cout << "Taxi Model Name: " << taxi->getModelName() << std::endl;
    return 0;
}