#include<bits/stdc++.h>
using namespace std;
class A {
public:
    void showA() {
        cout << "Class A";
    }
};

class B {
public:
    void showB() {
        cout << "Class B";
    }
};

class C : public A, public B {
};

int main(){
    C x;
    x.showB();   //output will be the ClassB 

    return 0 ;
}
