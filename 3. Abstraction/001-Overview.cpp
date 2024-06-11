#include <iostream>
#include <cmath>
class Shape
{
public:
    virtual void draw() = 0;
    virtual double area() = 0;
};

// Derived class Circle
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    void draw() override { std::cout << "Drawing Circle" << std::endl; }

    double area() override { return 3.14 * radius * radius; }
};
class Rectangle : public Shape
{
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    void draw() override { std::cout << "Drawing Rectangle" << std::endl; }

    double area() override { return width * height; }
};

int main()
{
    Shape *shape1 = new Circle(5.0);
    Shape *shape2 = new Rectangle(4.0, 6.0);

    shape1->draw();
    std::cout << "Area: " << shape1->area() << std::endl;

    shape2->draw();
    std::cout << "Area: " << shape2->area() << std::endl;

    delete shape1;
    delete shape2;

    return 0;
}
