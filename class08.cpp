//Copy Constructor
//Copy Constructor is a special constructor that is called when an object is created using another object of the same class


/*

if we do not provide any constructor, the compiler provides a default constructor and a copy constructor

if we provide any constructor, the compiler does not provide a default constructor

if we provide a copy constructor, the compiler does not provide a default as well as copy constructor

*/


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

    void set_data(int a,int b){
        real = a;
        imag = b;
    }

    Complex (int x,int y){ //parameterized constructor
        real = x;
        imag = y;
    }

    Complex(){};//default constructor


    //Copy constructor
    Complex(Complex &c){ //&c is a reference to the object c 
        real = c.real;
        imag = c.imag;
    }


    Complex(int a,int b){
        real = a;
        imag = b;
    }

};



#include <iostream>
using namespace std;




int main(){
    
    return 0;
}