#include<iostream>
using namespace std;
class Pokemon{
    public:
    string name ;
    string type;
    int hp;
    void print(){
        cout<<name<<""<<type<<hp<<endl;
    }
     Pokemon(string name,string type,int hp){
       this->name =name;
      this->type = type;
        this->hp=hp;
    
     }


};
int main(){
    Pokemon p1("pikachu","Electric",70);
     Pokemon p2("Charizard","fire",120);
        Pokemon p3("mewtwo","psychic",200);
        p3.print();


}