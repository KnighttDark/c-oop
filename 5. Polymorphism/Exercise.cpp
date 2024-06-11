/*
Một chương trình cần quản lý các đối tượng là nhân viên trong công ty. Các nhân viên đều có các thuộc tính chung như sau:
•	Họ tên
•	Mức lương cơ bản
•	Số năm kinh nghiệm
Tuy nhiên, có nhiều cách tính lương tuỳ thuộc vào vị trí công việc của nhân viên đó.
•	Nhân viên nhân sự (HR): Mức lương bằng mức cơ bản
•	Kĩ sư lập trình: Được cộng thêm 15% mức cơ bản
•	Nhân viên kinh doanh: có thêm thuộc tính về số hợp đồng ký được trong tháng (ví dụ bằng x), và lương được cộng thêm x% so với mức cơ bản.
Thiết kế các class cho các đối tượng nhân viên trên
Xây dựng một chương trình quản lý nhân viên trong công ty gồm các chức năng thêm, sửa, xoá,... và chức năng thống kê số tiền lương cần thanh toán cho nhân viên
*/

#include <iostream>
#include <vector>
#include <string>

class Employee
{
public:
    Employee(std::string fullName, float baseSalary, int experience)
        : fullName(fullName), baseSalary(baseSalary), experience(experience) {}

    /* Virtual function */
    virtual float calculateSalary() = 0;
    virtual void display()
    {
        std::cout << "Full name: " << fullName << std::endl;
        std::cout << "Base salary: " << baseSalary << std::endl;
        std::cout << "Experience: " << experience << std::endl;
    }

protected:
    std::string fullName;
    float baseSalary;
    int experience;
};

class HR : public Employee
{
public:
    HR(std::string fullName, float baseSalary, int experience) : Employee(fullName, baseSalary, experience) {}
    float calculateSalary() override { return baseSalary; }

private:
};

class Programmer : public Employee
{
public:
    Programmer(std::string fullName, float baseSalary, int experience) : Employee(fullName, baseSalary, experience) {}
    float calculateSalary() override { return baseSalary + baseSalary * 0.15; }
};

class Sale : public Employee
{
public:
    Sale(std::string fullName, float baseSalary, int experience, int contract) : Employee(fullName, baseSalary, experience), contract(contract) {}

    float calculateSalary() override { return baseSalary + baseSalary * contract / 100; }

    void display() override
    {
        Employee::display();
        std::cout << "Contract: " << contract << std::endl;
    }

private:
    int contract;
};

class Company
{
public:
    void addEmployee(Employee *employee)
    {
        employees.push_back(employee);
    }

    void display()
    {
        for (auto employee : employees)
        {
            employee->display();
        }
    }

    float totalSalary()
    {
        float total = 0;
        for (auto employee : employees)
        {
            total += employee->calculateSalary();
        }
        return total;
    }

private:
    std::vector<Employee *> employees;
};

int main()
{
    Company *company = new Company();

    company->addEmployee(new HR("HR", 1000, 5));

    company->addEmployee(new Programmer("Programmer", 1000, 5));

    company->addEmployee(new Sale("Sale", 1000, 5, 10));

    std::cout << "Employees:\n";
    company->display();

    std::cout << "Total salary: " << company->totalSalary() << std::endl;

    // Delete
    delete company;
    return 0;
}