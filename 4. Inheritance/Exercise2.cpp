/*

Một chương trình cần quản lý các đầu sách. Mỗi cuốn sách có các thông tin chung như sau: tên nhà xuất bản, năm phát hành
Các đầu sách được chia cụ thể ra làm nhiều loại, mỗi loại lại có thông tin riêng. Cụ thể như sau:

I - Sách học tập: có thêm thông tin về môn học/lĩnh vực mà sách nói đến (như Toán, Lý, Hoá, …)
I.1 - Sách giáo khoa: có thêm thông tin về danh sách các trường đang sử dụng
I.2 - Sách bài tập: có thêm thông tin về mức độ khó (dành cho đại trà hay học sinh khá giỏi)


II - Truyện: có thêm thông tin về giới hạn độ tuổi (16+ hay 18+ ….), tên tác giả, tên người dịch
II.1 - Tiểu thuyết: có thểm thông tin về số chương
II.1.1 - Tiểu thuyết ngôn tình
II.1.2 - Tiểu thuyết trinh thám
II.2 - Truyện tranh: có thêm thông tin về tên các phim hoạt hình đã chuyển thể
Áp dụng tính chất kế thừa để chia tách đặc điểm chung, đặc điểm riêng và thiết kế các class trên
(các phương thức có thể để rỗng hoặc in ra thông báo tuỳ ý)

*/

#include <iostream>
#include <string>

class Book
{
public:
    Book() {}
    Book(std::string publisher, int YearofRelease) : publisher(publisher), YearofRelease(YearofRelease) {}
    void displayInfo()
    {
        std::cout << "Publisher:" << publisher << "\n";
        std::cout << "Year of Release:" << YearofRelease << "\n";
    }

protected:
    std::string publisher;
    int YearofRelease;
};

class StudyBook : public Book
{
public:
    StudyBook() {}
    StudyBook(std::string publisher, int YearofRelease, std::string subject) : Book(publisher, YearofRelease), subject(subject) {}
    /* :Book: Member Initializer List----*/

    void displayInfo()
    {
        Book::displayInfo();
        std::cout << "Subject:" << subject << "\n";
    }

protected:
    std::string subject;
};

class TextBook : public StudyBook
{
public:
    TextBook() {}
    TextBook(std::string publisher, int YearofRelease, std::string subject, int numbersOfSchools)
        : StudyBook(publisher, YearofRelease, subject), numbersOfSchools(numbersOfSchools) {}

    void displayInfo()
    {
        StudyBook::displayInfo();
        std::cout << "Numbers of Schools:" << numbersOfSchools << "\n";
    }

protected:
    int numbersOfSchools;
};

class ExerciseBook : public TextBook
{
public:
    ExerciseBook(std::string publisher, int YearofRelease, std::string subject, int numbersOfSchools, std::string levelStudent)
        : TextBook(publisher, YearofRelease, subject, numbersOfSchools), levelStudent(levelStudent) {}

    void displayInfo()
    {
        TextBook::displayInfo();
        std::cout << "Level Student:" << levelStudent << "\n";
    }

protected:
    std::string levelStudent;
};

class StoryBook : public Book
{
public:
    StoryBook() {}
    StoryBook(std::string publisher, int YearofRelease, std::string author, std::string translator, int ageLimit)
        : Book(publisher, YearofRelease), ageLimit(ageLimit), author(author), translator(translator) {}

    void displayInfo()
    {
        Book::displayInfo();
        std::cout << "Author:" << author << "\n";
        std::cout << "Translator:" << translator << "\n";
        std::cout << "Age Limit:" << ageLimit << "\n";
    }

protected:
    int ageLimit;
    std::string author;
    std::string translator;
};

class Novel : public StoryBook
{
public:
    Novel(std::string publisher, int YearofRelease, std::string author, std::string translator, int ageLimit, int numberChapters)
        : StoryBook(publisher, YearofRelease, author, translator, ageLimit), numberChapters(numberChapters) {}

    void displayInfo()
    {
        StoryBook::displayInfo();
        std::cout << "Number Chapters:" << numberChapters << "\n";
    }

private:
    int numberChapters;
};

class Novellanguage : public StoryBook
{
public:
    Novellanguage(std::string publisher, int YearofRelease, std::string author, std::string translator, int ageLimit, std::string nameFilm)
        : StoryBook(publisher, YearofRelease, author, translator, ageLimit), nameFilm(nameFilm) {}
    void displayInfo()
    {
        StoryBook::displayInfo();
        std::cout << "Language:" << nameFilm << "\n";
    }

protected:
    std::string nameFilm;
};

int main()
{
    std::cout << "Book\n";
    Book *book = new Book("NXB Tre", 2021);
    book->displayInfo();

    std::cout << "\nStudy Book\n";
    StudyBook *studyBook = new StudyBook("NXB Tre", 2021, "Math");
    studyBook->displayInfo();

    std::cout << "\nText Book\n";
    TextBook *textBook = new TextBook("NXB Tre", 2021, "Math", 100);
    textBook->displayInfo();

    std::cout << "\nExercise Book\n";
    ExerciseBook *exerciseBook = new ExerciseBook("NXB Tre", 2021, "Math", 100, "Primary");
    exerciseBook->displayInfo();

    std::cout << "\nStory Book\n";
    StoryBook *storyBook = new StoryBook("NXB Tre", 2021, "Nguyen Nhat Anh", "Nguyen Nhat Anh", 13);
    storyBook->displayInfo();

    std::cout << "\nNovel\n";
    Novel *novel = new Novel("NXB Tre", 2021, "Nguyen Nhat Anh", "Nguyen Nhat Anh", 13, 20);
    novel->displayInfo();

    std::cout << "\nNovel Language\n";
    Novellanguage *novellanguage = new Novellanguage("NXB Tre", 2021, "Nguyen Nhat Anh", "Nguyen Nhat Anh", 13, "Vietnamese");
    novellanguage->displayInfo();
    return 0;
}
