#include <iostream>
#include <string>

class SmartPhone
{
public:
    void call()
    {
        std::cout << "Calling\n";
    }

    void launch()
    {
        std::cout << "Launching\n";
    }

    void setProduct(std::string p)
    {
        this->product = p;
    }

    std::string getProduct()
    {
        return this->product;
    }

private:
    std::string product;
    std::string version;
    float size;
    int numberOfWarranty;
};

class iPhone : public SmartPhone
{
public:
    iPhone()
    {
        std::cout << "iPhone is running\n";
    }

    void faceId()
    {
        std::cout << "Face ID\n";
    }

    void TransmissionFile()
    {
        std::cout << "TransmissionFile File\n";
    }

private:
};

class GalaxyS
{
public:
    GalaxyS()
    {
        std::cout << "iPhone is running\n";
    }

    void penS()
    {
        std::cout << "Pen S\n";
    }

    void lunchCH()
    {
        std::cout << "Lunch CH\n";
    }

private:
};

class RedmiNote
{
public:
    RedmiNote()
    {
        std::cout << "iPhone is running\n";
    }

private:
};

class Xperia
{
public:
    Xperia()
    {
        std::cout << "iPhone is running\n";
    }

private:
};

int main()
{
}