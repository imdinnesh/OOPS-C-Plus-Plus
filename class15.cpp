//Overloading of operator as a friend function

#include <iostream>
using namespace std;

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

        friend Complex operator+(Complex, Complex); //friend function declaration

};

Complex operator+(Complex c1, Complex c2){
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main(){

    Complex c1;
    c1.setData(3, 4);
    Complex c2;
    c2.setData(5, 6);
    Complex c3 = c1 + c2;
    c3.showData();
    
    return 0;
}