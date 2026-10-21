#include <iostream>
using namespace std;
// Base class
class Shape
{
public:
    virtual void area()
    {
        cout << "Area of shape" << endl;
    }
};
// Derived class
class Circle : public Shape
{
public:
    void area()
    {
        double radius;

        cout << "Enter radius: ";
        cin >> radius;

        cout << "Area of circle = " << 3.142 * radius * radius << endl;
    }
};
// Derived class
class Rectangle : public Shape
{
public:
    void area()
    {
        double length;
        double width;

        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;

        cout << "Area of rectangle = " << length * width << endl;
    }
};

int main()
{
    Shape *ptr;

    Circle c;
    Rectangle r;
    ptr = &c;
    ptr->area();

    cout << endl;
    ptr = &r;
    ptr->area();
    return 0;
}