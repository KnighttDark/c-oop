#include <iostream>
#include <string>

class Ticket
{
public:
    Ticket() {}
    Ticket(std::string nameFlight, std::string dateFlight, float price)
        : nameFlight(nameFlight), dateFlight(dateFlight), price(price) {}

    void setNameFlight(std::string nameFlight) { this->nameFlight = nameFlight; }
    std::string getnameFlight() { return this->nameFlight; }

    void Display()
    {
        std::cout << "Name of Flight: " << nameFlight << "\n";
        std::cout << "Date of Flight: " << dateFlight << "\n";
        std::cout << "Price of Flight: " << price << "\n";
    }

protected:
    std::string nameFlight;
    std::string dateFlight;
    float price;
};

class Person
{
public:
    Person() {}
    Person(std::string fullName, std::string sex, int age)
        : fullName(fullName), sex(sex), age(age) {}

    void Infor()
    {
        std::cout << "Fullname:" << fullName << "\n";
        std::cout << "Sex:" << sex << "\n";
        std::cout << "Age:" << age << "\n";
    }

protected:
    std::string fullName;
    std::string sex;
    int age;
};

class Client : public Person, public Ticket
{
public:
    Client() {}
    Client(std::string fullName, std::string sex, int age, std::string id, int numberOfTickets,
           std::string nameFlight, std::string dateFlight, float price)
        : Person(fullName, sex, age), Ticket(nameFlight, dateFlight, price), id(id), numberOfTickets(numberOfTickets) {}

    void Infor()
    {
        Ticket::Display();
        Person::Infor();
        std::cout << "ID:" << id << "\n";
        std::cout << "Number Of Tickets:" << numberOfTickets << "\n";
    }

private:
    std::string id;
    int numberOfTickets;
};

int main()
{
    Client *client_1 = new Client("Tran Dang Thanh", "Male", 22, "20ete", 3, "VN Airline", "2024-05-10", 250.0);
    client_1->Infor();
    return 0;
}