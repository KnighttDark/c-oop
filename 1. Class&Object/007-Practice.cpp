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
    Destination *Introduce(std::string language, int isAge) /* Case 1-----*/
    /* Return a class-----*/
    {
        Destination *des = new Destination;
        des->distance = 0;

        for (int i = 0; i < 5; i++)
        {
            des->distance += i;
        }

        std::cout << "Distance:" << des->distance << std::endl;

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

    Destination *Introduce(int count) /* Case 2-----*/
    {
        Destination *des = new Destination;
        for (int i = 0; i < count; i++)
        {
            des->content += "Counter: " + std::to_string(i) + "\n";
        }
        return des;
    }

    /* Overload Operator-----*/
    Destination *Introduce(std::string language) /* Case 3-----*/
    {
        Destination *des = new Destination;
        des->content = "What's up!";
    }
};

int main()
{
    Student *student1 = new Student;
    /* Overload Operator-----*/
    Destination *des = student1->Introduce("Vietnam", 20); /* Case 1-----*/

    /* Overload Operator-----*/
    Destination *des = student1->Introduce(20); /* Case 2-----*/

    /* Overload Operator-----*/
    Destination *des = student1->Introduce("English"); /* Case 3-----*/

    std::cout << des->content;

    return 0;
}