#include <iostream>
#include <string>

class Vehicle
{

public:
    Vehicle()
    {
        std::cout << "Vehicle is running\n";
    }
    void setModelName(std::string modelName)
    {
        this->modelName = modelName;
    }

    std::string getModelName()
    {
        return modelName;
    }

    void run()
    {
        std::cout << "Vehicle is running\n";
    }

private:
    std::string modelName;
};

class Car : public Vehicle
{
public:
    Car()
    {
        std::cout << "Car is running\n";
    }

private:
    std::string ownerName;
};

class Truck : public Vehicle
{
public:
    Truck()
    {
        std::cout << "Truck is running\n";
    }

private:
    int expirationYear;
};

class Pickup : public Car, public Truck
{
};

int main()
{
    Pickup *pickup = new Pickup();

    return 0;
}

/*

    Khi gọi hàm khởi tạo thì nó bị gọi 2 lần
    Output:
        Vehicle is running
        Car is running
        Vehicle is running
        Truck is running
    + Gây ra hiện tượng ambigous
*/