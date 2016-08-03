#include <iostream>
using namespace std;

//abstract base c;ass
class Shape
{
protected:
    string name;

public:
    Shape( string s )
    {name = s;}

    void setName( string s )
    {name = s;}

    string getName() const
    {return name;}

    //pure virtual function
    virtual double getArea() const = 0;
};
//first child class
class Circle : public Shape
{
double radius;

public:
    Circle(string n, double r) :  Shape ( n )
    { radius = r; }

    void setRadius( double r )
    { radius = r; }

    double getRadius() const
    { return radius; }
    double getArea() const
    {
        return 3.14159 * radius * radius;
    }

};

//second child class

class Rectangle : public Shape
{
    double length, width;
public:
    Rectangle( string n, double l, double w ) : Shape(n)
    {        length = l; width = w;}
    void setLength( double l )
    { length = l; }
    void setWidth( double w )
    { width = w; }
    double getLength() const
    {        return length;}
    double getWidth() const
    {        return width;    }
    double getArea() const
    {
        return length * width;
    }
};



//third child class
class Triangle : public Shape
{
    double base, width;
public:
    Triangle( string n, double b, double w) : Shape(n)
    {
        base = b; width = w;
    }
    double getArea() const
    {
        return .5 * base * width;
    }
};

int main()
{
/*
    Circle c("Circle", 3.1);
    c.setName("Circle TOO");
    cout << c.getName() << endl;
    cout << c.getRadius() << endl;
    cout<<c.getArea()<<endl;

    Rectangle r("Rectangle", 4.2, 2.5);
    cout<<r.getName()<<endl;
    cout<<r.getWidth()<<" "<<r.getLength()<<endl;
    cout<<r.getArea()<<endl;


Triangle t("Triangle", 4, 3);
cout<<t.getArea()<<endl;
*/
Shape* shapes[3] = { new Circle("Circle", 2.1), new Rectangle("Rectangle",3.1,1.2), new Triangle("triangle", 8.1, 2.3)};
    //print area of all shapes in array
    for (int i = 0; i < 3; i ++)
    cout << "shape " << i << " area = " << shapes[i]->getArea() << endl;

    return 0;
}
