#include <iostream>
#include <string>

struct RegisterInfor
{
    RegisterInfor() {}
    RegisterInfor(const RegisterInfor &otherInfo)
    {
        std::cout << "Copy constructor" << std::endl;
    }
    std::string license;
    std::string ownerName;
};

class Vehicle
{
public:
    // Truyền bằng value
    // Truyền bằng reference
    // Truyền bằng pointer
    Vehicle(const std::string &name, const RegisterInfor &info) // info = infoThanh
        : modelName(name), ownerName(info.ownerName),
          license(info.license)
    {
    }

    virtual void run()
    {
        std::cout << " Vehicle is running" << std::endl;
    }

protected:
    const std::string modelName;
    std::string ownerName;
    std::string license;
};

class Taxi : public Vehicle
{
public:
    Taxi(std::string name, RegisterInfor info)
        : Vehicle(name, info)
    {
    }
    virtual void run()
    {
        std::cout << modelName << " is running" << std::endl;
    }

private:
};

int main()
{
    RegisterInfor infoThanh;
    infoThanh.license = "1234";
    infoThanh.ownerName = "Anh Thanh";

    Vehicle *taxi = new Taxi("Toyota", infoThanh);
    taxi->run();
}