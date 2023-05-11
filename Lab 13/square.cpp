// This program declares the Square class and uses member functions to find
// the perimeter and area of the square
//Erik Ocampo

#include <iostream>
using namespace std;

class Square
{
public:
    Square();
    Square(float length);
    ~Square();
    void setSide(float length);
    float findArea();
    float findPerimeter();

private:
    float side;
};

Square::Square()
{
    side = 1.0;
}

Square::Square(float length)
{
    side = length;
}

Square::~Square()
{
    // Destructor does not have any specific implementation for this class
}

void Square::setSide(float length)
{
    side = length;
}

float Square::findArea()
{
    return side * side;
}

float Square::findPerimeter()
{
    return 4 * side;
}

int main()
{
    Square box1(9);

    cout << "The area of box1 is: " << box1.findArea() << endl;
    cout << "The perimeter of box1 is: " << box1.findPerimeter() << endl;

    return 0;
}
