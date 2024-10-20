// Abstarct class
#include <iostream>
using namespace std;

/*

A class is called abstract class if it has at least one pure virtual function.
Abstract classes can not be instantiated.
or we can say that we can not create object of abstract class.

Why we need abstract class?

1-- In programming, we go for the concept of generalization and specialization.
Now suppose we have a studnet class and a faulty class, then person class can be a general class
and student and faulty class can be a specialized class.

-- In this case we can make person class as abstract class and student and faulty class as derived class.

2--It forces the derived class to implement the defination of the function.



*/

class A{

    public:
        virtual void fun()=0;// Pure virtual function or 
        //do nothing function or abstarct function

};

class B : public A{
    public:
        void fun(){ // This function is mandatory to define
            cout<<"Function of class B"<<endl;
        }

};






int main(){
    
    return 0;
}