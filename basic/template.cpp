#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T addition();
    T subtraction();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::addition()
{
    return a + b;
}

template <class T>
T Arithmetic<T>::subtraction()
{
    return a - b;
}

int main()
{
    Arithmetic<int> ar(10, 5);
    cout << ar.addition() << "\n";
    cout << ar.subtraction() << "\n";

    Arithmetic<float> arr(10.25, 5.27);
    cout << arr.addition() << "\n";
    cout << arr.subtraction();
}