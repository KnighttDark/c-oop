/*
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

#include <iostream>
#include <string>
#include <vector>

class Student
{
public:
    int id;
    int age;
    std::string name;
    std::string address;
    float height;
    float weight;
    std::vector<float> score;

    Student(int id, int age, std::string name, std::string address, float height, float weight, std::vector<float> score)
        : id(id), age(age), name(name), address(address), height(height), weight(weight), score(score) {}

    void Introduce()
    {
        std::cout << "My name is " << name << "\n";
        std::cout << "I am " << age << " years old\n";
        std::cout << "I am from " << address << "\n";
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

int main()
{
    std::vector<float> score = {8, 7, 6, 9, 8, 7, 8, 9, 10, 11};
    Student *student_1 = new Student(1, 18, "Tran Dang Thinh", "Ha Noi", 1.75, 60, score);
    student_1->Introduce();
    student_1->showScore();
    std::cout << "\n";
    student_1->showAcademicPerformance();

    delete student_1;

    return 0;
}