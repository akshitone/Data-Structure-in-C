#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle()
    {
        length = breadth = 1;
    }
    Rectangle(int l, int b);
    int area();
    int get_length();
    void set_length(int l);
    ~Rectangle();
};

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::get_length()
{
    return length;
}

void Rectangle::set_length(int l)
{
    length = l;
}
Rectangle::~Rectangle() {}

int main()
{
    Rectangle rec(10, 5);
    cout << rec.area() << '\n';
    rec.set_length(20);
    cout << rec.get_length();
}