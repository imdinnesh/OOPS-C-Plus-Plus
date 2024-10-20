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
    Complex(int a,int b){//parameterized constructor
        real = a;
        imag = b;
    }
    Complex(int k){
        real = k;
        imag = k;
    }
    //Added later
    Complex (){}//default constructor
};


int main(){

    Complex c1(3,4);
    Complex c2(5);
    Complex c3; //no matching constructor for initialization of 'Complex'
    //no default constructor available
    Complex c4=Complex(3,4);//this is also valid

    /*

    if no constructor is defined, the compiler provides a default constructor
    if we define a constructor, the compiler does not provide a default constructor

    */
    
    return 0;
}