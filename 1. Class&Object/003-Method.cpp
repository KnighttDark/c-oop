#include <iostream>
#include <string>

class Message
{
public:
    std::string content;
    std::string sender;
};
class Woman
{
public:
    std::string fullName;
    Message *makeUp(std::string language, bool isMakeUp = true)
    /* Return a class-----------*/
    {
        Message *msg = new Message;
        if (language == "English")
        {
            msg->content = "A woman";
            if (isMakeUp)
            {
                msg->content = "Pretty girl!";
            }
        }
        return msg;
    }
};

int main()
{
    Woman *person1 = new Woman;
    Message *msg = person1->makeUp("Vietnam", true);
    std::cout << msg->content;
    return 0;
}
