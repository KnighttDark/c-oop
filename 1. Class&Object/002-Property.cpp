#include <iostream>
#include <string>

class BodySize
{
public:
    int bodySize[3];
    float weight;
};
class Woman
{
public:
    std::string fullName;
    BodySize bodySize;

    void makeUp()
    {
    }

    void Introduce()
    {
        std::cout << "Hi! My name is X";
    }
};

int main()
{
    Woman *harriwon = new Woman;
    harriwon->Introduce();
    return 0;
}

/*
    Bản chất class là version "nâng cấp" của struct
    - Class có thể chứa các phương thức (method) và thuộc tính (property)
    - Struct chỉ chứa thuộc tính (property)
    - Struct và Class đều có thể chứa các biến, hàm, phương thức, thuộc tính
    - Struct và Class đều có thể kế thừa từ 1 class khác
    - Struct và Class đều có thể implement interface
*/