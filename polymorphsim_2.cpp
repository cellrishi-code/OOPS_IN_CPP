
#include <bits/stdc++.h>
using namespace std;

class Complex {
    int real;
    int img;

public:
    Complex(int r, int i) : real(r), img(i) {}

    // Overloading the + operator
    Complex operator+(Complex &c) {
        Complex temp(real + c.real, img + c.img);
        return temp;
    }

    void print() {
        cout << real << " + i" << img << endl;
    }
};

int main() {
    Complex c1(3, 6);
    Complex c2(2, 4);

    Complex c3 = c1 + c2;

    cout << "First complex number: ";
    c1.print();

    cout << "Second complex number: ";
    c2.print();

    cout << "Sum: ";
    c3.print();

    return 0;
}
