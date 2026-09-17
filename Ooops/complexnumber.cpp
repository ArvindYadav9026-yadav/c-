#include<iostream>
using namespace std;
class Complex{
    public:
    float real;
    float imaginary;
    Complex( float real, float imaginary){
        this->real = real;
        this->imaginary = imaginary;
       


    }
      void print(){
        if(imaginary<0)
        cout<<real<<"-"<<-imaginary<<"i"<<endl;
        else 
         cout<<real<<"+"<<imaginary<<"i"<<endl;
    } 
    void add(Complex c){
        real =real+c.real;
        imaginary=imaginary+c.imaginary;
    }
    void multiply(Complex c){
        real=real*c.real-imaginary*c.imaginary;
        imaginary=real*c.imaginary+imaginary*c.real;

    }
  
    

};
int main(){
   Complex c1(3, 7);
      Complex c2(3, 7);
    c1.print();
      c1.add(c2);
      c1.multiply(c2);
    c2.print();
}