#include<iostream>
using namespace std;
int main(){
    
    int a;
    cout<<"Enter a first  number:";
    cin>>a;
    int b;
    cout<<"Enter a second number:";
    cin>>b;
    for(int i=a; i<b; i++){
        if(i%2==0 && i!=a ){
            cout<<i;
        }
    }


   
   

   }

       