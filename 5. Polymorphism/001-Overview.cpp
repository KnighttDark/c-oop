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
    Vehicle()
    {
        std::cout << "Vehicle constructor" << std::endl;
    }

    void run()
    {
        std::cout << "Vehicle is running" << std::endl;
    }
};

class Car : public Vehicle
{
public:
    Car()
    {
        std::cout << "Car constructor" << std::endl;
        ownerName = "None";
    }

    void run()
    {
        std::cout << "Car of " << ownerName << " is running" << std::endl;
    }

private:
    std::string ownerName;
};

int main()
{

    // Car *car = new Car();
    // ((Vehicle *)car)->run(); // Up-casting
    // // Ép kiểu từ Car về Vehicle, nó sẽ gọi hàm run() của Vehicle

    // Vehicle *vehicle = new Vehicle();
    // ((Car *)vehicle)->run(); // Down-casting

    Car *car = new Car();
    Vehicle *vehicle = car;  // Up-casting
    // Ép kiểu qua 1 con trỏ khác, những vẫn trên đối tượng đó
    ((Car *)vehicle)->run(); // Down-casting
}


/*
    Nếu không override hàm run() của lớp cha thì khi ép kiểu từ lớp con về lớp cha, hàm run() của lớp cha sẽ được gọi
*/