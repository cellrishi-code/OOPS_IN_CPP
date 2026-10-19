#include <iostream>
using namespace std;

class Calculator {
public:
    // Add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Add two decimal numbers
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator c;

    cout << c.add(10, 20) << endl;
    cout << c.add(10, 20, 30) << endl;
    cout << c.add(2.5, 3.5) << endl;

    return 0;
}

//this is example of static polymorphim and within it , it is example of function
// overloading
