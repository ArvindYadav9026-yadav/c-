#include<iostream>
using namespace std;
class Car{ // User Defined Data type
    public:
    string name;
   int power;
   float mileage;
   bool isE29Compatible;

    
};
int main(){
    Car c1;
    c1.name="Kia Sonet";
    c1.power =118;
    c1.mileage=9.2;
    c1.isE29Compatible=true;
    Car c2 ={"Toyota Fortuner",200,7.6,false};
    cout<<c2.power<<endl;

}
  
