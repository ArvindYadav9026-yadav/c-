#include<iostream>
using namespace std;
class Student{ // User Defined Data type
    public:
    string name;
    int rno;
    float cgpa;
     Student (){
        
     };
    Student(string n, int r, float c){ // Parameterised Constructor
        name = n;
        rno = r;
        cgpa= c;

    }
    void print(){
         cout<<name<<rno<<cgpa;
    }
   
    
};

void change(Student& s){
    s.name="aakash";
}

int main(){
  Student x("sumit",39,8.7) ;//cout<</ x is a object/Varible
 change(x);
  x.print();
  
  
}