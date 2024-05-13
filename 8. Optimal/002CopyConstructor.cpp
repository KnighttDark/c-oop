#include <iostream>
#include <string>

class Person
{
public:
    Person(std::string name) : fullname(name) {}
    void setFullname(std::string name) { fullname = name; }
    std::string getFullname() { return fullname; }

private:
    std::string fullname;
};

class Vehicle
{
public:
    Vehicle(std::string name)
        : modelName(name)
    {
        std::cout << "Create a vihicle" << name << std::endl;
    }
    Vehicle(Vehicle &otherVehicle)
    {
        std::cout << "Clone a vehicle" << otherVehicle.getModelName() << "\n";
        modelName = otherVehicle.modelName;
    }

    std::string getModelName() { return modelName; }
    virtual void run()
    {
        std::cout << modelName << " is running" << std::endl;
    }

protected:
    std::string modelName;
    Person *owner;
};

int main()
{
    Person *person = new Person("Anh Thanh");
    Vehicle *vehicle1 = new Vehicle("Toyota");
    Vehicle *vehicle2 = new Vehicle(*vehicle1);
    vehicle1->run();
    vehicle2->run();
    return 0;
}