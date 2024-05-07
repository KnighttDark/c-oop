#include <iostream>
#include <string>

class Woman
{
private:
    std::string name;
    int age;
    std::string address;
    float height;
    float weight;

public:
    Woman(std::string name, int age, std::string address, float height, float weight)
    {
        this->name = name;
        this->age = age;
        this->address = address;
        this->height = height;
        this->weight = weight;
    }

    float getHeight()
    {
        return this->height;
    }
    float getWeight()
    {
        return this->weight;
    }
};

class HealthChecker
{

private:
    int bloodPressure;
    int heartRate;
    float height;
    float weight;

public:
    void check(Woman *woman)
    {
        weight = woman->getWeight();
        height = woman->getHeight();
        bloodPressure = 120;
        heartRate = 80;
    }

    std::string getResult()
    {
        float bmi = weight / (height * height);
        if (bmi >= 18.5 && bmi <= 24.9 && bloodPressure >= 120 && bloodPressure <= 140 && heartRate >= 60 && heartRate <= 100)
        {
            return "Healthy";
        }
        {
            return "Unhealthy";
        }
    }
};

int main()
{

    Woman *hariwon = new Woman("Hari Won", 30, "HCM", 1.65, 65);
    HealthChecker *checker = new HealthChecker();
    checker->check(hariwon);
    std::string result = checker->getResult();
    std::cout << result << std::endl;
    return 0;
}