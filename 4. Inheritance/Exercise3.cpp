#include <iostream>
#include <string>

class Ticket
{
public:
    Ticket() {}
    Ticket(std::string nameFlight, std::string dateFlight, float price)
    {
        this->nameFlight = nameFlight;
        this->dateFlight = dateFlight;
        this->price = price;
    }
    void setNameFlight(std::string nameFlight)
    {
        this->nameFlight = nameFlight;
    }

    std::string getnameFlight()
    {
        return this->nameFlight;
    }

    void Display()
    {
        std::cout << "Name of Flight: " << nameFlight << "\n";
        std::cout << "Date of Flight: " << dateFlight << "\n";
        std::cout << "Price of Flight: " << price << "\n";
    }

private:
    std::string nameFlight;
    std::string dateFlight;
    float price;
};

class Person
{
public:
    Person() {}
    Person(std::string fullName, std::string sex, int age)
    {
        this->fullName = fullName;
        this->sex = sex;
        this->age = age;
    }

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
    Client(std::string fullName, std::string sex, int age, std::string id, int numberOfTickets)
    {
        this->fullName = fullName;
        this->sex = sex;
        this->age = age;
        this->id = id;
        this->numberOfTickets = numberOfTickets;
    }
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
    Client *c = new Client("THHH", "Nam", 30, "AAAA", 3, "Flight ABC123", "2024-05-10", 250.0);
    c->Infor();
    return 0;
}