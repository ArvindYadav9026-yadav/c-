#include<iostream>
using namespace std;
class Crickter{
    public:
    string name;
    int runs;
    float average;
    Crickter( string name, int runs, float average){
        this->name=name;
        this->runs=runs;
        this->average=average;
    }
    void print(){
        cout<<name<<endl;
         cout<<runs<<endl;
          cout<<average<<endl;
    }
};
int main(){
    Crickter c1("Virat kohli",14000,58.1);
      Crickter c2("Sachin Tendulkar",18000,46.7);
       Crickter c3("Rohit Sherma",11000,48.7);

       Crickter* p =new Crickter("ABD",10000,55.2);// object pointer;


       Crickter* ptr =&c1;
       cout<<c1.average<<endl;
       p->print();
    //    (*ptr).average=74.2;
       ptr->average=89.0;
       cout<<(*ptr).average<<endl;
        cout<<(*ptr).runs<<endl;
         cout<<(*ptr).name<<endl;


         int x = 10;
         int* y = new int(10);

   
}