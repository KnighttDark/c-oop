/*
    Mô tả: Chương trình có các đối tượng sinh viên (student) và giáo sư (professor).
    Mỗi giáo sư sẽ chịu trách nhiệm quản lý một số sinh viên.
    Giáo sư khi muốn giảng dạy (train) sẽ cần sử dụng tới giáo án, bài giảng (lecture).
    Đọc hiểu code của chương trình và vẽ lại sơ đồ class bằng ngôn ngữ UML
    https://drive.google.com/file/d/1Qiu18y8bJomwiEZqATP5IKt5eKBpxZXn/view?usp=sharing
*/

#include <iostream>
#include <vector>

class Address
{
    std::string street;
    std::string city;
    std::string district;
    std::string postalCode;
    std::string country;
};

class Person
{
public:
    Person(std::string n, int a)
    {
        name = n;
        age = a;
    }

    bool hasParkingPass()
    {
        return true;
    }

protected:
    std::string name;
    int age;
    float phoneNumber;
    std::string email;
    Address address;
};

class Student : public Person
{
public:
    Student(std::string n, int a) : Person(n, a) {}

private:
    float studentID;
};

class Lecture
{
public:
    Lecture(std::string n)
    {
        name = n;
    }

    std::string getName()
    {
        return name;
    }

private:
    std::string name;
};

class Professor : public Person
{
public:
    Professor(std::string n, int a) : Person(n, a) {}

    void addStudent(Student *student)
    {
        studentList.push_back(student);
    }

    void train(Lecture *lecture)
    {
        std::cout << "The professior named " << name
                  << "\nis teaching for " << studentList.size() << " students \nwith lecture: "
                  << lecture->getName() << "\n";
    }

private:
    std::vector<Student *> studentList;
    float salary;
};

int main()
{
    Professor *tokuda = new Professor("Tokuda", 50);
    tokuda->addStudent(new Student("Vu", 30));
    tokuda->addStudent(new Student("Son", 25));
    tokuda->addStudent(new Student("Yen", 20));

    Lecture *lecture = new Lecture("Tinh ke thua trong OOP");

    tokuda->train(lecture);
}
