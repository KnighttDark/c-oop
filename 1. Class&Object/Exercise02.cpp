/* Yêu cầu 1

Thiết kế class thể hiện một đối tượng Học sinh trong thực tế
# Các thuộc tính và data type tương ứng
    Mã học sinh - int
    Tên - string
    Tuổi - int
    Quê quán
    Chiều cao - float
    Cân nặng - float
    Điểm trung bình 8môn học Toán, Lý, Hoá, Văn, Anh, Sinh, Sử, Địa - mảng/vector
# Phương thức
    Giới thiệu bản thân gồm tên, tuổi, quê quán
    Show bảng điểm của 8 môn học
    Show học lực, nếu trung bình 8 môn trên 8 là giỏi, từ 5 đến 8 là khá và còn lại là trung bình
    Tự tạo hàm main để test các phương thức.
    Lưu ý: các đối tượng cần cấp phát động
*/

/* Yêu cầu 2
Thiết kế đối tượng lớp học
Dựa trên đối tượng học sinh ở bài 02.01, tiếp tục phát triển thêm để thiết kế đối tượng lớp học trong thực tế
# Thuộc tính:
    Mã lớp - string (VD: 10A5)
    Danh sách học sinh - mảng/vector các đối tượng học sinh
    Lớp trưởng - con trỏ tới đối tượng học sinh
    Số lớp học có trong trường
# Phương thức:
    Thêm 1 học sinh vào lớp
    Xoá 1 học sinh khỏi lớp (xoá theo mã học sinh)
    Sửa thông tin của học sinh
    Thiết lập lớp trưởng cho lớp
    In ra số học có trong lớp
    Tự tạo hàm main để test các phương thức. Lưu ý: các đối tượng cần cấp phát động


*/

#include <iostream>
#include <vector>
#include <string>

class Student
{
public:
    int id;
    int age;
    float height;
    float weight;
    std::string name;
    std::string address;
    std::vector<float> score;

    Student(int id, int age, float height, float weight, std::string name, std::string address, std::vector<float> score)
        : id(id), age(age), name(name), address(address), height(height), weight(weight), score(score) {}

    void Introduce()
    {
        std::cout << "My name is " << name << "\n";
        std::cout << "I am " << age << " years old\n";
        std::cout << "I am from " << address << "\n";
        std::cout << "\n";
    }

    void showScore() const
    {
        std::cout << "Score of 8 subjects:\n";
        for (int i = 0; i < score.size(); i++)
        {
            std::cout << score[i] << " ";
        }
    }

    void showAcademicPerformance() const
    {
        float averagePoint = average();

        if (averagePoint >= 8)
        {
            std::cout << "Excellent\n";
        }
        else if (averagePoint >= 5)
        {
            std::cout << "Good\n";
        }
        else
        {
            std::cout << "Average\n";
        }
    }

    void updateInfo(int age, float height, float weight, std::string name, std::string address, std::vector<float> score)
    {
        this->age = age;
        this->height = height;
        this->weight = weight;
        this->name = name;
        this->address = address;
        this->score = score;
    }

private:
    float average() const
    {
        float sum = 0;
        for (int i = 0; i < score.size(); i++)
        {
            sum += score[i];
        }
        return sum / score.size();
    }
};

class Grade
{
public:
    std::string classID;
    std::vector<Student *> student;
    Student *classPresident;
    int numberOfStudent;

    Grade(std::string classID, std::vector<Student *> student, Student *classPresident, int numberOfStudent)
    {
        this->classID = classID;
        this->student = student;
        this->classPresident = classPresident;
        this->numberOfStudent = numberOfStudent;
    }

    void addStudent(Student *student)
    {
        this->student.push_back(student);
        numberOfStudent++;
    }
    void removeStudent(int id)
    {
        for (int i = 0; i < student.size(); i++)
        {
            if (student[i]->id == id)
            {
                student.erase(student.begin() + i);
                numberOfStudent--;
                break;
            }
        }
    }

    void modifyStudent(int id, int age, float height, float weight, std::string name, std::string address, std::vector<float> score)
    {
        for (int i = 0; i < student.size(); i++)
        {
            if (student[i]->id == id)
            {
                student[i]->updateInfo(age, height, weight, name, address, score);
                break;
            }
        }
    }
    void showStudent()
    {
        for (int i = 0; i < student.size(); i++)
        {
            student[i]->Introduce();
        }
    }

    int countStudent()
    {
        return numberOfStudent;
    }
};

int main()
{
    std::vector<float> score = {8, 9, 10, 7, 6, 8, 9, 10};
    Student *student = new Student(1, 20, 1.7, 60, "Nguyen Van A", "Ha Noi", score);
    student->Introduce();

    /* Create a new student-----*/
    std::vector<float> score1 = {8, 9, 10, 7, 6, 8, 9, 10};
    Student *student1 = new Student(2, 21, 1.7, 60, "Nguyen Van B", "Nghe An", score1);

    /* Show infor new student-----*/
    student1->Introduce();

    /* Add student-----*/
    std::vector<Student *> students;
    students.push_back(student);

    /* Create class----*/
    Grade *grade = new Grade("10A1", students, student, 1);
    grade->addStudent(student1);

    /* Show all student in class-----*/
    std::cout << "Number of student in class:"
              << " " << grade->countStudent() << "\n";
    std::cout << "\n";
    grade->showStudent();

    /* Remove student*/
    grade->removeStudent(1);

    /* Show all student in class-----*/
    std::cout << "Number of student in class:"
              << " " << grade->countStudent() << "\n";

    std::cout << "\n";
    grade->showStudent();

    /* Update Infor-----*/
    grade->modifyStudent(2, 22, 1.8, 70, "Nguyen Van C", "Ha Noi", score);
    return 0;
}
