// This pointer in C++
/*

A pointer contains the address of the object is called object pointer

this is a local object pointer in every instance member function containijng the address
of the caller object...






*/

#include <iostream>
using namespace std;

class Box{
    int l,b,h;

    public:

    void set_Dimensions(int l,int b,int h){
        this->l=l;
        this->b=b;
        this->h=h;
    }

    void show_Dimensions(){
        cout<<"The lenght breadth and height is "<<l<<endl<<b<<endl<<h<<endl;
    }



};



int main(){

    Box smallBox;
    Box bigBox;
    smallBox.set_Dimensions(10,20,30);
    smallBox.show_Dimensions();

    //pointer 
    Box *ptr;

    /*

    . Dot is used with objects 
    -> arrow is used with pointers
    
    
    */

    ptr=&bigBox;
    ptr->set_Dimensions(40,60,70);
    ptr->show_Dimensions();
    
    return 0;
}

