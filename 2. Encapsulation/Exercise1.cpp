#include <iostream>
#include <string>

class Hospital
{
private:
    std::string idPatient;
    std::string fullName;
    std::string date;
    std::string idDisease;
    float price;

public:
    Hospital(std::string idPatient, std::string fullName, std::string date, std::string idDisease, float price)
    {
        this->idPatient = idPatient;
        this->fullName = fullName;
        this->date = date;
        this->idDisease = idDisease;
        this->price = price;
    }

    void setidPatient(std::string idPatient)
    {
        this->idPatient = idPatient;
    }

    void setFullName(std::string fullName)
    {
        this->fullName = fullName;
    }

    void setDate(std::string date)
    {
        this->date = date;
    }

    void setIdDisease(std::string idDisease)
    {
        this->idDisease = idDisease;
    }

    void setPrice(float price)
    {
        this->price = price;
    }

    std::string getIdPatient()
    {
        return this->idPatient;
    }

    std::string getFullName()
    {
        return this->fullName;
    }

    std::string getDate()
    {
        return this->date;
    }

    std::string getIdDisease()
    {
        return this->idDisease;
    }

    float getPrice()
    {
        return this->price;
    }

    void showInfo()
    {
        std::cout << "ID Patient: " << idPatient << std::endl;
        std::cout << "Full Name: " << fullName << std::endl;
        std::cout << "Date: " << date << std::endl;
        std::cout << "ID Disease: " << idDisease << std::endl;
        std::cout << "Price: " << price << std::endl;
    }
};

int main()
{
    Hospital *h1 = new Hospital("123", "Huy", "12/12/2021", "456", 1000);
    h1->showInfo();

    return 0;
}