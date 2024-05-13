#include <iostream>
#include <string>

class Person
{
};

class Vehicle
{
public:
    Vehicle(std::string name, int year, Person *person)
        : modelName(name),
          manufactureYear(year),
          owner(person),
          frameSize{2, 1.6, 1.2}
    {
        // thường gọi hàm thủ tục
        // tạo hàm init
        // ....
        // ....
    }

protected:
    std::string modelName;
    int manufactureYear;
    Person *owner;
    // Person & owner
    //  Referance or Pointer
    //  1. Pointer: không cần cấp dữ liệu ban đầu
    //  2. Referance: cần cấp dữ liệu ban đầu

    float frameSize[3];
    // Tương tự mảng, không cần cấp dữ liệu ban đầu
    // Gán cho từng phần tử mới được
    // Còn trong trường hợp dùng intialiation thì được ( cần gán giá trị ban đầu)
};

class Taxi : public Vehicle
{
public:
    Taxi(std::string name, int year, Person *person)
        : Vehicle(name, year, person)
    {
    }

protected:
};

int main()
{
    Person *person = new Person();
    Taxi *taxi = new Taxi("Toyota", 2020, person);
    return 0;
}