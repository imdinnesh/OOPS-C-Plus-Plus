//Increment operator overloading
#include <iostream>
using namespace std;

class Interger{
    int x;
    public:
        void setData(int a){
            x = a;
        }
        void getData(){
            cout << "Value of x: " << x << endl;
        }

        //prefix increment
        Interger operator++(){
            Interger temp;
            temp.x = ++x;
            return temp;
        }

        //postfix increment
        Interger operator++(int){//int is used to differentiate between prefix and postfix
            Interger temp;
            temp.x = x++;
            return temp;
        }


};


int main(){

    Interger i1;
    i1.setData(3);
    Interger i2 = i1++;
    i1.getData();
    i2.getData();
    


    
    return 0;
}