
#include <iostream>
#include <string>
#include <vector>

// Forward declaration
class Vehicle;
class Engine;
class Car;
class Person;
class Checker;

// Implementation
class Vehicle
{
public:
    std::string getModelName()
    {
        return modelName;
    }

    void setModelName(std::string name)
    {
        this->modelName = name;
    }
    virtual void run()
    {
        std::cout << "Vehicle is running" << std::endl;
    }

protected:
    std::string modelName;
};

class Checker
{
    bool isValid()
    {
        bool result = true;
        //...
        //
        //...Check* check;
        // checker->check(....)
    }
};

class Engine
{
};

class Car : public Vehicle
{

public:
    Car()
    {
        Engine engine;
    }
    ~Car()
    {
    }

private:
    std::string ownerCar;
    Engine engine;
};

class Person
{
public:
    void setVehicle(Vehicle *v)
    {
        vehicle = v;
    }

private:
    std::vector<Vehicle *> vehicle_list;
    Vehicle *vehicle;
    std ::string name;
};

int main()
{
    Vehicle *vehicle = new Car();
    Person *person = new Person();
    person->setVehicle(vehicle);
}

/* Cấp phát động

    class Engine
{
};

class Car : public Vehicle
{
    Car()
    {
        engine = new Engine();
    }
    ~Car()
    {
        delete engine;
    }

public:
private:
    std::string ownerCar;
    Engine *engine;
    // Khi khởi tạo cấp phát động thì Engine này cũng lưu vào vùng nhớ Heap nhưng ở chỗ khác


};

*/