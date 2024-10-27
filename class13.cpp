// Friend function

#include <iostream>
using namespace std;

/*

Friend function is a function that is not a member of a class 
but has access to the class's private and protected members but not directly.

Friend function can be declared inside the class or outside the class.

Since friend function doesnt belong to the class,
We donot use the scope resolution operator to define the friend function.



*/

class Complex{

    int real, imag;

    public:
        
        void setData(int a, int b){
            real = a;
            imag = b;
        }

        void showData(){
            cout << "Real: " << real << " Imag: " << imag << endl;
        }

        friend void display(Complex); //friend function declaration
};

//No scope resolution operator
void display(Complex a){
    cout << "Real: " << a.real << " Imag: " << a.imag << endl;
}

int main(){

    Complex c1;
    c1.setData(3, 4);
    display(c1);
    
    
    return 0;
}