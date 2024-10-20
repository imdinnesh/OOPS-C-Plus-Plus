//Multiple friend functions
#include <iostream>
using namespace std;


class A{

    public:

    void fun();

};

class B{

    friend void A::fun(); // This is a friend function of class A
    // or
    friend class A; // This will make all the functions of class A as friend




};

//This fun is not a member of any class
void fun(){

}





int main(){
    
    return 0;
}