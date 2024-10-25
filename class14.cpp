/*
Friend function can become friend of more than one class.
*/

#include <iostream>
using namespace std;
class B;
class A{
    int x;
    public:
        void setdata(int a){
            x = a;
        }

        friend void fun(A, B);
        

};

class B{
    int y;
    public:
        void setdata(int b){
            y = b;
        }
        friend void fun(A, B);

};


void fun(A a, B b){
    cout << a.x << " " << b.y << endl;
}





int main(){

    A a;
    B b;

    a.setdata(10);
    b.setdata(20);
    fun(a, b);

    
    return 0;
}