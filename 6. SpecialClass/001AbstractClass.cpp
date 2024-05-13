/*
    Abstract class là gì?
    - Abstract class là một class mà không thể khởi tạo đối tượng từ nó.
    - Abstract class chứa ít nhất một phương thức ảo (pure virtual function).
    - Abstract class có thể chứa phương thức thông thường.
    - Abstract class có thể chứa biến dữ liệu.
    - Abstract class có thể chứa constructor và destructor.

*/

/*
    Pure virtual function là gì?
    - Pure virtual function là một phương thức ảo không có cài đặt.
    - Pure virtual function được khai báo bằng cách thêm = 0 vào cuối dòng khai báo phương thức.
    - Một class chứa pure virtual function được gọi là abstract class.

*/

/*
    - Abstract class cần ít nhất pure virtual function là được coi là abstract class.
    - Không thể khởi tạo đối tượng từ abstract class, có thể dùng con trỏ được
    - Nêu class dẫn xuất không override lại pure virtual  cơ sở thì nó cũng trở thành abstract class.

*/
#include <iostream>
#include <string>

class Vehicle // Abstract class
{
public:
    // virtual void run()
    // {
    //     std::cout << "Vehicle is running" << std::endl;
    // }

    virtual void run() = 0;
    // Pure virtual function
};

class Car : public Vehicle
{
public:
    void run() override
    {
        std::cout << "Car is running" << std::endl;
    }
};

class Truck : public Vehicle
{
public:
    void run()
    {
        std::cout << "Truck is running" << std::endl;
    }
};

// Motor bike is abstract class

class Motorbike : public Vehicle
{
};

class Scooter : public Motorbike
{
    void run()
    {
        std::cout << "Scooter is running" << std::endl;
    }
};

int main()
{
    // Vehicle *vehicle = new Vehicle();
    // Error: Cannot instantiate abstract class
    Vehicle *vehicle_list[3];
    vehicle_list[0] = new Car();
    vehicle_list[1] = new Truck();
    // vehicle_list[2] = new Motorbike();

    vehicle_list[2] = new Scooter();
    // - Nêu class dẫn xuất không override lại pure virtual  cơ sở thì nó cũng trở thành abstract class.

    for (int i = 0; i < 3; i++)
    {
        vehicle_list[i]->run();
    }
}
