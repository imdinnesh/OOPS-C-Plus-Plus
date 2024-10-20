//Adding to complex numbers
#include <iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;
    public:
        void set_Data(int x ,int y){
            real = x;
            img = y;
        }

        void get_Data(){
            cout<<real<<" + i"<<img<<endl;
        }
        Complex add(Complex a, Complex b){
            Complex temp;
            temp.real=a.real+b.real;
            temp.img=a.img+b.img;
            return temp;
        }
        Complex add(Complex a){
            Complex temp;
            temp.real=real+a.real;
            temp.img=img+a.img;
            return temp;
        }


};

int main(){

    Complex c1,c2,c3,c4;
    c1.set_Data(10,20);
    c2.set_Data(5,10);
    c3=c3.add(c1,c2);
    c4=c1.add(c2);
    c3.get_Data();
    c4.get_Data();



    return 0;
}