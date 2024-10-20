// Virtual Functions

/*


any base class pointer can point to the derived class object
but the converse is not true.




*/


class A{
    
    public:
    
    void f1(){
    
    }
    void f2(){
    
    }

};

class B:public A{
        
    public:
        
    void f1(){//Method Overriding
        
    }


};

#include <iostream>
using namespace std;





int main(){

    A *aptr, a;  //*ptr is of type A 
    B b;

    aptr=&b; //Base class pointer pointing to derived class object
    b.f1(); //Derived class object calling its own function


    aptr->f1(); //Since the compiler doesn't know the type of object it is pointing to, 
    //it will call the function of the base class only as it is a ptr of type A. 
    //This is called Early Binding.

    //It can only know the address of the object it is pointing to at runtime.
    //So, it will call the function of the derived class 
    //only if the function is declared as virtual in the base class.

    // In late binding, the function to be called is decided at runtime.
    // we decide the function to be called by its content or address but not by its name/type



    
    return 0;
}