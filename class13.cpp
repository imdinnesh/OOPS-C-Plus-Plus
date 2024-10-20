// Friend function

#include <iostream>
using namespace std;

/*

Friend function is a function that is not a member of a class 
but has access to the class's private and protected members but not directly.



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


void display(Complex a){
    cout << "Real: " << a.real << " Imag: " << a.imag << endl;
}

int main(){

    Complex c1;
    c1.setData(3, 4);
    display(c1);
    
    
    return 0;
}