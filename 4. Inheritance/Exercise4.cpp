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
        : nameFlight(nameFlight), dateFlight(dateFlight), priceFlight(priceFlight) {}
    float getPriceFlight() const { return priceFlight; }
    std::string getDateFlight() const { return dateFlight; }
    std::string getNameFlight() const { return nameFlight; }

private:
    std::string nameFlight;
    std::string dateFlight;
    float priceFlight;
};

class Person
{
public:
    Person() {}

    Person(std::string fullName, std::string sex, int age)
        : fullName(fullName), sex(sex), age(age) {}

    std::string getFullName() const { return fullName; }

private:
    std::string fullName;
    std::string sex;
    int age;
};

class Passenger : public Person
{
public:
    Passenger(std::string fullName, std::string sex, int age, Ticket *ticket, int numberTickets, int passengerId)
        : Person(fullName, sex, age), ticket(ticket), passengerId(passengerId), numberTickets(numberTickets) {}
    ~Passenger() { delete ticket; }

    float total() const { return ticket->getPriceFlight() * numberTickets; }
    int getPassengerId() const { return passengerId; }
    const Ticket *getTicket() const { return ticket; }

private:
    Ticket *ticket;
    int passengerId;
    int numberTickets;
};

Passenger inputPassenger(int passengerIndex)
{
    std::string fullName;
    std::string sex;
    std::string nameFlight;
    std::string dateFlight;
    int age;
    int numberTickets;
    float priceFlight;

    std::cout << "Enter information of passenger " << passengerIndex + 1 << ":\n";
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
    int passengerId = passengerIndex + 1; // Mã hành khách sẽ là số thứ tự của hành khách trong danh sách
    Passenger passenger(fullName, sex, age, ticket, numberTickets, passengerId);
    return passenger;
}

void displayPassengers(const std::vector<Passenger> &passengers)
{
    std::cout << "\nList of passengers:\n\n";
    for (size_t i = 0; i < passengers.size(); ++i)
    {
        std::cout << "Passenger " << passengers[i].getPassengerId() << ":\n";
        std::cout << "Full name: " << passengers[i].getFullName() << std::endl;
        std::cout << "Flight: " << passengers[i].getTicket()->getNameFlight() << std::endl;
        std::cout << "Date of flight: " << passengers[i].getTicket()->getDateFlight() << std::endl;
        std::cout << "Total: " << passengers[i].total() << std::endl;
        std::cout << std::endl;
    }
}

int main()
{
    std::vector<Passenger> passengers;
    int n;
    std::cout << "Enter number of passengers: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        passengers.push_back(inputPassenger(i));
    }

    displayPassengers(passengers);

    return 0;
}
