#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int id ;
    int age;
    string name;
    int nos;

    Student(){
        cout<<"manmade ctor"<<endl;
    }

    Student(int id , int age , string name, int nos){
        cout<<"this is the paramerteized constructor"<<endl;
        this->id = id ;
        this->age = age;
        this->name = name;
        this-> nos =nos;

    }

    Student(const Student &srcobj){   //by refrence it is doing , in cpp , evrythig is done by value.
        cout<<"this is a copy constr";
        this->id = srcobj.id ;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this-> nos =srcobj.nos;
    }

    void study(){
        cout<<this->name<<" is studening"<<endl;
    }

    void sleep(){
        cout<<"my student is sleeping"<<endl;
    }

    //   ~Student(){
    //     cout<<"manmade dtor"<<endl;
    // }
};


int main(){
    // // Student A;
    // // A.id=1;
    // // A.age=13;
    // // A.name="rishi";
    // // A.nos=7;
    // // A.study();
    // Student A(1, 34,"rishi", 4);    //this is done using stack --> static allocation.
    // // cout<<A.age<<endl;
    // Student C =A;   //Student C(A)  //same way of doing.
    // cout<<C.name<<endl;

     //dynamic allocation // student pointer

     Student *A =new Student(1,34,"rishi",7);
     cout<<A->name<<endl;
     A->study();
     delete A;   //dyanmic memory allocation , we need to delete it by ourselevs. cpp concept



    return 0;
}
