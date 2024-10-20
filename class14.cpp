/*
Friend function can become friend of more than one class.
*/

#include <iostream>
using namespace std;
class B;
class A{
    int x;
    public:
        friend void fun(A, B);
        

};

class B{
    int y;
    public:
        friend void fun(A, B);

};


void fun(A a, B b){
    cout << a.x << " " << b.y << endl;
}





int main(){
    
    return 0;
}