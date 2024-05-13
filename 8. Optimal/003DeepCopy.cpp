/*
    - Có một số thuộc tính không thể copy được
    + Ví dụ: con trỏ, tham chiếu

*/
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
    }
    Vehicle(Vehicle &otherVehicle)
    {

        modelName = otherVehicle.modelName;
        owner = new Person(otherVehicle.getOwner()->getFullname());
        //  owner = new Person(*otherVehicle.owner);
    }

    std::string getModelName() { return modelName; }
    void setOwner(Person *person) { owner = person; }
    Person *getOwner() { return owner; }

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
    vehicle1->setOwner(person);

    Vehicle *vehicle2 = new Vehicle(*vehicle1);
    vehicle2->getOwner()->setFullname("Anh Thinh");
    std::cout << vehicle2->getOwner()->getFullname() << "\n";
    std::cout << vehicle1->getOwner()->getFullname() << "\n";

    return 0;
}