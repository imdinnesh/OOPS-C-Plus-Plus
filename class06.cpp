#include <iostream>
using namespace std;


//Constructor
//Constructor is a special member function that is called when an object is created
//Constructor has the same name as the class
//Constructor does not have a return type
//Constructor is used to initialize the object
//Constructor is called automatically when an object is created
//If we do not define a constructor, the compiler provides a default constructor
//If we define a constructor, the compiler does not provide a default constructor
//Constructor can be overloaded
//Constructor can have default arguments
// Constructor makes an object object


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


};

int main(){

    Complex c1;
    Complex c2;
    
    return 0;
}