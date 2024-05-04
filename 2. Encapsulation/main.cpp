#include <iostream>
#include <string>

struct BodySize
{
    float height;
    float weight;
    float around3[3];
};

class Student
{
public:
    Student(std::string name, int age)
    {
        this->name = name;
        this->age = age;
        bodySize.height = 1.7;
        bodySize.weight = 68;
        bodySize.around3[0] = 90;
        bodySize.around3[1] = 60;
        bodySize.around3[2] = 90;
    }

    void Introduce()
    {
        std::cout << "Heigh: " << bodySize.height << std::endl;
        std::cout << "Weight: " << bodySize.weight << std::endl;
        std::cout << "Around 3: " << bodySize.around3[0] << " " << bodySize.around3[1] << " " << bodySize.around3[2] << std::endl;
    }

    void Infor()
    {
    }

    void setAge(int age)
    {
        this->age = age;
    }

    int getAge()
    {
        return this->age;
    }

private:
    BodySize bodySize;
    std::string name;
    int age;
    int weigh;
};

int main()
{
    Student *s1 = new Student("Huy", 20);
    s1->setAge(21);
    std::cout << s1->getAge() << std::endl;
    s1->Introduce();
    return 0;
}