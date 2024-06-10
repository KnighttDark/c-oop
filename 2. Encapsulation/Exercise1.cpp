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
    Hospital(std::string iP, std::string fn, std::string d, std::string iD, float p)
        : idPatient(iP), fullName(fn), date(d), idDisease(iD), price(p) {}

    void setidPatient(std::string iP) { this->idPatient = iP; }
    void setFullName(std::string fn) { this->fullName = fn; }
    void setDate(std::string d) { this->date = d; }
    void setIdDisease(std::string iD) { this->idDisease = iD; }
    void setPrice(float p) { this->price = p; }

    std::string getIdPatient() { return this->idPatient; }
    std::string getFullName() { return this->fullName; }
    std::string getDate() { return this->date; }
    std::string getIdDisease() { return this->idDisease; }
    float getPrice() { return this->price; }

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

    delete h1;
    return 0;
}