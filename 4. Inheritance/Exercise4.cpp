/*
    Một chương trình quản lý bán vé máy bay cần có các đối tương cùng thuộc tính sau
    - Vé máy bay: Tên chuyến, Ngày bay, Giá vé
    - Người: Họ tên, Giới tính, Tuổi
    - Hành khách - kế thừa đối tượng Người, và có thêm các thuộc tính sau: Vé máy bay, Số lượng vé

    Thiết kế các class trên, bổ sung Constructor/Getter/Setter/function khác nếu cần.
    Chương trình cần nhập 1 danh sách gồm n hành khách (từ bàn phím/file/…)
    Hiển thị danh sách hành khách và số tiền phải trả tương ứng
*/

#include <iostream>
#include <vector>
#include <string>

class Ticket
{
public:
    Ticket(std::string nameFlight, std::string dateFlight, int priceFlight)
    {
        this->nameFlight = nameFlight;
        this->dateFlight = dateFlight;
        this->priceFlight = priceFlight;
    }

    float getPriceFlight()
    {
        return priceFlight;
    }

private:
    std::string nameFlight;
    std::string dateFlight;
    float priceFlight;
};

class Person
{
public:
    Person()
    {
    }

    Person(std::string fullName, std::string sex, int age)
    {
        this->fullName = fullName;
        this->sex = sex;
        this->age = age;
    }

    std::string getFullname()
    {
        return fullName;
    }

private:
    std::string fullName;
    std::string sex;
    int age;
};

class Passanger : public Person
{
public:
    Passanger(std::string fullName, std::string sex, int age, Ticket *ticket, int numberTickets) : Person(fullName, sex, age)
    {
        this->ticket = ticket;
        this->numberTickets = numberTickets;
    }
    float total()
    {
        return ticket->getPriceFlight() * numberTickets;
    }

private:
    Ticket *ticket;
    int passengerId;
    int numberTickets;
};

int main()
{
    std::vector<Passanger> listPassanger;
    int n;
    std::cout << "Enter number of passanger: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::string fullName;
        std::string sex;
        std::string nameFlight;
        std::string dateFlight;
        int age;
        int numberTickets;
        float priceFlight;

        std::cout << "Enter infomation of passanger " << i + 1 << ":\n";
        std::cout << "Enter full name: ";
        std::cin.ignore();
        std::getline(std::cin, fullName);
        std::cout << "Sex: ";
        std::getline(std::cin, sex);
        std::cout << "Age: ";
        std::cin >> age;
        std::cout << "Enter name of flight: ";
        std::cin.ignore();
        std::getline(std::cin, nameFlight);
        std::cout << "Enter date of flight: ";
        std::getline(std::cin, dateFlight);
        std::cout << "Enter price of flight: ";
        std::cin >> priceFlight;
        std::cout << "Enter number of tickets: ";
        std::cin >> numberTickets;

        Ticket *ticket = new Ticket(nameFlight, dateFlight, priceFlight);
        Passanger *passanger = new Passanger(fullName, sex, age, ticket, numberTickets);
        listPassanger.push_back(*passanger);
    }
    std::cout << std::endl;
    std::cout << "List passanger:\n";
    std::cout << std::endl;

    for (int i = 0; i < listPassanger.size(); i++)
    {
        std::cout << "Passanger " << i + 1 << ":\n";
        std::cout << "Full name: " << listPassanger[i].getFullname() << std::endl;
        std::cout << "Total: " << listPassanger[i].total() << std::endl;
    }

    for (int i = 0; i < listPassanger.size(); i++)
    {
        delete &listPassanger[i];
    }

    return 0;
}