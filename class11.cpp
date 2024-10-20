// Unary Operator Overloading

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

        Complex operator-(){ //Unary operator overloading
            Complex temp;
            temp.real = -real;
            temp.imag = -imag;
            return temp;
        }

};

int main(){

    Complex c1;
    c1.setData(3, 4);
    Complex c2 = -c1;
    // c2 = c1.operator-();
    c2.showData();
    
    return 0;
}