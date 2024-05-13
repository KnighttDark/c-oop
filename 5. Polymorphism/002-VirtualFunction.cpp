/*
    # Down-Casting ( Không nên )
    - ép từ 1 thằng dẫn xuất về 1 thằng cơ sở
    - là việc chuyển đổi con trỏ từ lớp cha sang lớp con.
    - từ thằng cha -> thằng con thì không bao gồm các thuộc tính và phương thức của thằng con

    # Up-Casting
    - ép từ 1 thằng cơ sở về 1 thằng dẫn xuất
    - bao gồm các thuộc tính và phương thức của thằng con (vì thằng con kế thừa từ thằng cha)

*/

#include <iostream>
#include <vector>
#include <string>

class Vehicle
{
public:
    virtual void run()
    {
        std::cout << "Vehicle is running" << std::endl;
    }
};

class Car : public Vehicle
{
public:
    void run()
    {
        std::cout << "Car of is running" << std::endl;
    }

private:
    std::string ownerName;
};

class Truck : public Vehicle
{
public:
    void run()
    {
        std::cout << "Truck is running" << std::endl;
    }
};

class Motorbike : public Vehicle
{
public:
    void run() override
    {
        std::cout << "Motorbike is running" << std::endl;
    }
};

int main()
{
    // Up-casting
    Vehicle *car = new Car();
    Vehicle *truck = new Truck();
    Vehicle *motorbike = new Motorbike();

    // Cùng kiểu -> đưa vào mảng
    Vehicle *vehicle_list[3];
    vehicle_list[0] = car;
    vehicle_list[1] = truck;
    vehicle_list[2] = motorbike;

    for (int i = 0; i < 3; i++)
    {
        vehicle_list[i]->run();
    }
};

/*
    override: 
*/