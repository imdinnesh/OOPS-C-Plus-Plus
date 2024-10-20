// Insertion and extraction operator overloading

#include <iostream>
using namespace std;


class Complex{

    int real, imag;

    public:
        void set_data(int r, int i){
            real = r;
            imag = i;
        }
        void show_data(){
            cout << real << " + i" << imag << endl;
        }

        // Overloading insertion operator
        friend ostream& operator<<(ostream &o, Complex &c){
            o<<c.real<<" + i"<<c.imag<<endl;
            return o;   // This is done to allow cascading of operators
        }

        // Overloading extraction operator
        friend istream& operator>>(istream &i, Complex &c){
            i>>c.real>>c.imag;
            return i;// This is done to allow cascading of operators
        }




};




int main(){

    Complex c1;
    cout<<"Enter real and imaginary part of complex number: ";


    /*

    cin and cout are objects of istream and ostream class respectively.
    They are used to take input and give output respectively.
    But they are not objects of Complex class.
    So, we cannot use them to take input and give output to the objects of Complex class.
    
    
    */


    cin>>c1; // Similar to operator>>(cin, c1);
    // This will give error because we have not overloaded the extraction operator
    cout<<"Complex number is: ";
    cout<<c1; // Similar to operator<<(cout, c1);
    // This will give error because we have not overloaded the insertion operator

    
    return 0;
}