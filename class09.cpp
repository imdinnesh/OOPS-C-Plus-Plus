//Destructor in C++

/*

It is an instance member function 
It has the same name as the class but with a tilde(~) sign before it
It does not have a return type
It is called automatically when an object is destroyed
It cant be overloaded or inherited
it cant be static



*/

#include <iostream>
using namespace std;

class Complex{
    int real,imag;
    public:

    void set_data(int a,int b){
        real = a;
        imag = b;
    }
    void show_data(){
        cout<<real<<" + i"<<imag<<endl;
    }
    Complex(){
        cout<<"Constructor called"<<endl;
    }

    ~Complex(){
        cout<<"Destructor called"<<endl;
    }

};


int main(){

    Complex c1;
    

    return 0;
}