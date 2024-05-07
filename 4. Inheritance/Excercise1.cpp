#include <iostream>
#include <string>

class SmartPhone
{
public:
    void call()
    {
    }

    void launch()
    {
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
private:
};

class GalaxyS
{
public:
private:
};

class RedmiNote
{
public:
private:
};

class Xperia
{
public:
private:
};