#include <iostream>
using namespace std;

void fun(){
    static int x;
    //static local variable
    // x is initialized only once
    //lifetime of x is till the end of the program
    //x has a default value of 0

}

//Static member variable
//Static member variable is shared by all objects of the class

class Account{
    int balance; //instance member variable
    static float roi; //roi is a static member variable/ class member variable
    void setBalance(int b){
        balance = b;
    }

};

//Static member variable is defined outside the class
float Account::roi = 3.5;//by default roi is 0
//Static member variable is initialized only once


int main(){
    
    return 0;
}