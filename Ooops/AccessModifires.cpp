#include<iostream>
using namespace std;
class Crickter{
    private:
     int runs;
      string name;
   
    float average;
     
    public:
    string name;
   
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
    int getRuns(){
        return runs;
    }
    void setRuns(){
        this->runs=runs;
    }
   
};
int main(){
    Crickter* c=new Crickter("virat kohli",14000,58.1);
    // cout<<c->average<<endl;
    // cout<<c->name<<endl;
    // c->print();
    cout<<c->getRuns()<<endl;
    // c->setRuns(15000);
  //  cout<<c->runs<<end  private me can be access within in class
    
}
     