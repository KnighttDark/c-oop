#include <iostream>
#include <string>

class Destination
{
public:
    int distance;
    std::string content;
    std::string sender;
};

class Student
{
public:
    std::string name;

    Destination *Introduce(std::string language, int isAge)
    {
        Destination *des = new Destination;
        des->distance = 0;

        for (int i = 0; i < 5; i++)
        {
            des->distance += i;
        }

        std::cout << des->distance << std::endl;

        if (language == "Vietnam")
        {
            des->content = "Xin chao! Toi nguoi Viet Nam\n";
            if (isAge > 18)
            {
                des->content = "Toi da du 18 tuoi\n";
            }
            else
            {
                des->content = "Toi chua du 18 tuoi\n";
            }
        }
        else
        {
            des->content = "Hello! I am  Vietnamese\n";
        }
        return des;
    }

    Destination *Introduce(int count)
    {
        Destination *des = new Destination;
        for (int i = 0; i < count; i++)
        {
            des->content += "Hello" + std::to_string(i) + "\n";
        }
        return des;
    }
    // Ví dụ về nạp chồng toán tử
    Destination *Introduce(std::string language)
    {
        Destination *des = new Destination;
        des->content = "Hello! My name is ";
    }
};

int main()
{
    Student *student1 = new Student;
    Destination *des = student1->Introduce("Vietnam", 20);
    std::cout << des->content;

    return 0;
}