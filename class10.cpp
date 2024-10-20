//Operator Overloading
#include <iostream>
using namespace std;

/*

Operator overloading is a complile time polymorphism
It is a type of polymorphism in which an operator is overloaded to give user defined meaning to it.
We cannot overload all the operators. Only a few operators can be overloaded.
The operators which cannot be overloaded are:
1. Scope resolution operator (::)
2. Member selector operator (.) 
3. Member pointer operator (->)
4. Size of operator (sizeof)
5. Conditional operator (?:)


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

        Complex add(Complex c){
            Complex temp;
            temp.real = real + c.real;
            temp.imag = imag + c.imag;
            return temp;
        }

        Complex operator+(Complex c){ //Only valid operator is +, - , *, /
            Complex temp;
            temp.real = real + c.real;
            temp.imag = imag + c.imag;
            return temp;
        }





};

int main(){

    Complex c1;
    c1.setData(3, 4);
    Complex c2;
    c2.setData(5, 6);
    //c3=c1+c2;
    // error because we have not defined the operator overloading

    //solution
    //Complex c3 = c1.add(c2);
    //c3.showData();
    //or 
    //operator overloading
    Complex c3 = c1 + c2;
    c3.showData();

    
    return 0;
}

