#include <iostream>
#include <string>

class Vehicle
{

public:
    Vehicle() { std::cout << "Vehicle is created \n"; }

    Vehicle(std::string name) : modelName(name)
    {
        std::cout << "Created a vehicle with name: " << modelName << "\n";
    }

    void setModelName(std::string modelName) { this->modelName = modelName; }
    std::string getModelName() { return modelName; }
    void run() { std::cout << "Vehicle is running \n"; }

private:
    std::string modelName;
};

class Taxi : public Vehicle
{
public:
    /* Chỉ định hàm khởi tạo-----*/
    Taxi(std::string name) : Vehicle(name) { std::cout << name << " is created \n"; }

    void start()
    {
        std::cout << "Started....Ready to run \n";
        Vehicle::run();
    }

private:
};

int main()
{
    Taxi *taxi = new Taxi("Toyota");
    taxi->start();
    return 0;
}

/* Luồng thực thi------*/
/*
    Khi có thằng con kế thừa thằng cha
    thì sẽ khởi tạo thằng cha trước và chạy của thằng cha trước
    sau đó có thuộc tính của thằng con là gì thì nó sẽ đắp vào
    1. Gọi hàm khởi tạo của thằng cha, khởi tạo các thuộc tính, phươnng thức
    2. Ở hàm con: Thì nó sẽ gọi hàm khởi tạo và khởi tạo các thuộc tính, phương thức
    của thằng con
*/