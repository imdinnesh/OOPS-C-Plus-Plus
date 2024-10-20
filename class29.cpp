// Virtual Destructor

/*

Destructor in C++ is a member function of a class which is used to destruct objects of a class.
It is automatically called when the object goes out of scope.
It is used to release resources acquired by the object.



*/

#include <iostream>
using namespace std;

class A{
    public:
        void fun(){};

        virtual ~A(){ // This is a virtual destructor hence late binding
            cout<<"Destructor of class A"<<endl;
        }



};

class B: public A{
    public:
        void fun2(){};

        ~B(){ // This is a virtual destructor hence late binding
            cout<<"Destructor of class B"<<endl;
        }
};







int main(){

    A *aptr=new B;
    // Similar to the above example, we can also do this:
    // A *aptr2;
    // B b;
    // aptr2=&b;

    aptr->fun(); // This will work
    // But
    // aptr->fun2(); // This will not work because of early binding

    delete aptr; //It will delete the object of class B



    return 0;
}

