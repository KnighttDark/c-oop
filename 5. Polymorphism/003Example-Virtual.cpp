#include <iostream>
#include <vector>

class AreShape
{
public:
    virtual double calArea() const = 0;
};

class Rectangle : public AreShape
{
public:
    Rectangle(double cd, double cr) : cd(cd), cr(cr) {}

    double calArea() const override { return cd * cr; }
    /* Sử dụng override để biết là function này đàn sử dụng Virtual ----*/

private:
    double cd, cr;
};

class Square : public AreShape
{
public:
    Square(double c) : c(c) {}

    double calArea() const override { return c * c; }
    /* Sử dụng override để biết là function này đàn sử dụng Virtual ----*/

private:
    double c;
};

int main()
{
    /* Output----  /*
    /*
          AreShape *shape[] = {
           new hcn(3.5, 5.7),
           new hv(3.5)

       };

       for (int i = 0; i < 2; i++)
       {
           std::cout << "Shape:" << shape[i]->calArea();
       }

    */

    std::vector<AreShape *> shapes = {
        new Rectangle(3.5, 5.7),
        new Square(3.5)};

    for (const AreShape *shape : shapes)
    {
        std::cout << "Area: " << shape->calArea() << std::endl;
    }
}
