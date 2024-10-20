// Constructor and Destrutors  in inheritance

/*

In inheritance, when we create object for the derived class,
what will happen?

1. First, the base class constructor
2. Then, the derived class constructor





*/


#include <iostream>
using namespace std;

class A{
    int a;
    public:

    A(int x){
        a=x;
    }

    ~A(){
        cout<<"A destructor"<<endl;
    }

};

class B:public A{

    int b;

    public:

    // B(){
    //     cout<<"B constructor"<<endl;
    // }

    B(int x,int y):A(x){
        b=y;

    }

    ~B(){
        cout<<"B destructor"<<endl;
    }

};

/*

Order of Calling Constructor---
    Derived to Base

Order of Execution
    Base to Derived

Order of Calling Destructor---
    Derived to Base

Order of Execution
    Derived to base




*/






int main(){

    //B obj; Object of derived class then base class constructor will be called first 
    //then derived class constructor will be called.

    B obj(3,5);

    
    return 0;
}

