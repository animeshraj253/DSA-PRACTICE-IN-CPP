#include <iostream>

using namespace std;

class complex{
    private:
        int real;
        int imag;
    public:
        complex (){
            real = 0;
            real = 0;
        }        
        complex (int x, int y){
            real = x;
            imag = y;
        }
        void pirnt(){
            cout<<"Complex number is: "<<real<<" "<< imag<<"i"<<endl;
        }
    complex operator + (complex c){
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }
};

int main(){

    complex c1(10,20);
    complex c2(30,40);
    complex c3;

    c3 = c1 + c2;

    c3.pirnt();

    return 0;
}
