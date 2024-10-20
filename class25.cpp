//Method Overriding in C++

/*

1.Method Overloading
2.Method Overriding
3.Method Hiding

In Method Overloading, the method name is same but the arguments are different.
But the members are of the same class.


In Method Overriding, the method name is same and the arguments are same.
In Method Hiding, the method name is same 
but the arguments are different and the method is hidden in the derived class.





*/


#include <iostream>
using namespace std;

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
    void f2(int x){ //Method Hiding

    }



};

class Car{
    public:

    void shiftGear(){

    }


};

class SportsCar:public Car{

    public:

    void shiftGear(){ //Method Overriding
        //This method will override the shiftGear() method of Car class

    }

    void shiftGear(int x){ //Method Hiding

    }

};



int main(){

    B obj;
    obj.f1(); //B class f1() will be called

    // obj.f2(); // error as f2() is hidden in B class

    obj.f2(10); //B class f2(int x) will be called  
    
    return 0;
}