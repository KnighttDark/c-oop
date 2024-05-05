#include <iostream>
#include <string>
#include <vector>

struct Location
{
    std::string street;
    std::string city;
    std::string localCode;
    std::vector<float> numbers;
};

class Employee
{

public:
    Employee(int id, std::string firstName, std::string lastName, int salary)
    {
        this->id = id;
        this->firstName = firstName;
        this->lastName = lastName;
        this->salary = salary;
        location.street = "Da Nang";
    }

    void setId(int id)
    {
        this->id = id;
    }

    void setfirstName(std::string firstName)
    {
        this->firstName = firstName;
    }

    void setlastName(std::string lastName)
    {
        this->lastName = lastName;
    }
    void setSalary(int salary)
    {
        this->salary = salary;
    }

    int getId()
    {
        return this->id;
    }

    std::string getfirstName()
    {
        return this->firstName;
    }

    std::string getlastName()
    {
        return this->lastName;
    }

    int getSalary()
    {
        return this->salary;
    }

    void display()
    {
        std::cout << "ID:" << id << "\n";
        std::cout << "firtName:" << firstName << "\n";
        std::cout << "lastName:" << lastName << "\n";
        std::cout << "Salary:" << salary << "\n";
        std::cout << "Street:" << location.street << "\n";
    }

private:
    int id;
    std::string firstName;
    std::string lastName;
    int salary;
    Location location;
};

int main()
{
    Location *location = new Location{"Au Co", "Hoa Khanh", "2002", {1, 5, 7, 9}};

    Employee *employee_1 = new Employee(1, "Tran Dang", "Thanh", 5000);

    // employee_1->setNumbers({1, 5, 6, 7, 6});
    employee_1->display();

    std::cout << "\n";
    // Update
    // employee_1->setId(2);
    employee_1->display();

    return 0;
}