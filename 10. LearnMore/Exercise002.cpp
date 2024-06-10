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
#include <vector>

class Sinhvien
{
public:
    int id;
    std::string name;
    int age;
    std::string addr;
    float weight, height;
    std::vector<float> scores;

    // Hàm khởi tạo không có tham số
    Sinhvien()
    {
        std::cout << "Constructor is created\n";
    }

    // Hàm khởi tạo gồm 3 tham số

    Sinhvien(int age, std::string name, std::string addr) : age(age), name(name), addr(addr)
    {
        std::cout << "Constructors has 3 parmeters\n";
    }

    void Introduce()
    {
        std::cout << "Name:" << name << "\n";
        std::cout << "Age:" << age << "\n";
        std::cout << "Address:" << addr << "\n";
    }

    float Avarage()
    {
        float sum = 0;
        for (int i = 0; i < scores.size(); i++)
        {
            sum += scores[i];
        }
        return sum / scores.size();
    }

    void showPoint()
    {
        std::cout << "Your avarage:" << Avarage() << "\n";
    }
};

int main()
{
    std::vector<float> scores = {9, 7, 9, 8, 9, 8, 8, 9};
    Sinhvien *sinhvien = new Sinhvien(22, "Thanh", "Nghe An");
    sinhvien->scores = scores;
    sinhvien->Introduce();
    sinhvien->showPoint();
}