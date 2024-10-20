#include <iostream>
using namespace std;

class Account{
    int balance; //instance member variable
    static float roi; //roi is a static member variable/ class member variable
    void setBalance(int b){
        balance = b;
    }

    public:

    static void setRoi(float r){//static member function,static member function can be called without creating an object
        roi = r;//static member function can access only static member variables
        //Also called as class member function
    }

};

float Account::roi = 3.5;
int main(){

    Account a1;
    Account a2;
    a1.setRoi(4.6);
    Account::setRoi(5.6);
    //we can change the value of roi even without creating an object

    
    return 0;
}