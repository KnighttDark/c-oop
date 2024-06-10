#include <iostream>
#include <string>
#include <vector>

class Location
{
public:
    std::string street;
    std::string city;
    std::string localCode;
    std::vector<float> numbers;

    Location(std::string street, std::string city, std::string localCode, std::vector<float> numbers)
        : street(street), city(city), localCode(localCode), numbers(numbers) {}
};
class Employee
{  
public:
    Employee(int id, std::string firstName, std::string lastName, int salary)
        : id(id), firstName(firstName), lastName(lastName), salary(salary), location(location)
    {
        location.street = "Da Nang";
    }
    /* Setter-----*/
    void setId(int id) { this->id = id; }
    void setfirstName(std::string firstName) { this->firstName = firstName; }
    void setlastName(std::string lastName) { this->lastName = lastName; }
    void setSalary(int salary) { this->salary = salary; }

    /* Getter-----*/
    int getId() { return this->id; }
    std::string getfirstName() { return this->firstName; }
    std::string getlastName() { return this->lastName; }
    int getSalary() { return this->salary; }

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
    employee_1->display();

    std::cout << "\n";
    employee_1->display();

    return 0;
}