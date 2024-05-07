#include <iostream>
#include <string>

class Message
{
public:
    std::string content;
    std::string sender;
};

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
    Message *makeUp(std::string language, bool isMakeUp = true)
    {
        Message *msg = new Message;
        if (language == "Vietnam")
        {
            msg->content = "Toi là phu nua";
            if (isMakeUp)
            {
                msg->content = "Toi rat xinh dep ";
            }
        }
        return msg;
    }

    void Introduce()
    {
        std::cout << "Hi! My name is X";
    }
};

int main()
{
    Woman *person1 = new Woman;
    // person1->Introduce();
    Message *msg = person1->makeUp("Vietnam", true);
    std::cout << msg->content;
    return 0;
}

/*
    - Tham số mặc định luôn để phía sau các tham số bình thường
    - Kiểu trả về: int, string, 1 class,...
    - Nạp chồng hàm
    - Lỗi ambigous: khi 2 hàm có cùng tên, cùng kiểu trả về, cùng số lượng tham số, nhưng khác kiểu dữ liệu của tham số
    - Operator overloading (toán tử nạp chồng)
    - Sự liên quan sữ propety và method trong class (class và object):
        + Property: thuộc tính của class
        + Method: phương thức của class
        + Object: là một thể hiện của class
        + Class: là một khuôn mẫu để tạo ra object
        + Khi tạo ra object từ class, object sẽ có các property và method của class
        + Property và method của class có thể được truy cập thông qua object
        + Property và method của class có thể được truy cập thông qua con trỏ object
    
        + 
*/