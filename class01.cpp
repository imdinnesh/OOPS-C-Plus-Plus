#include <iostream>
using namespace std;

//Struct vs Class
//Struct: By default public
//Class: By default private


class Complex{
    private:
        int real;
        int img;
    public:
        void set_Data(int ,int);
        void get_Data(){
            cout<<real<<" + i"<<img<<endl;
        }


};

// :: -> Scope Resolution Operator
void Complex::set_Data(int x, int y){
    real = x;
    img = y;
}

int main(){

    Complex c1; //c1 is an object of class Complex
    c1.set_Data(10,20);
    c1.get_Data();
    
    return 0;
}