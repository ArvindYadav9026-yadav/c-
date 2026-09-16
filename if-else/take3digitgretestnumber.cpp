#include<iostream>
using namespace std;
int main(){
    int a ; 
    cout<<"Enter a number:";
    cin>>a;
    int b ; 
    cout<<"Enter a number:";
    cin>>b;
    int c ; 
    cout<<"Enter a number:";
    cin>>c;
    if(a>=b){
        if(a>=c){
            cout<<a<<"is largest";
        }
        else  cout<<c<<"is largest";
    }
    else{
        if(b>=c){
            cout<<b<<"is largest";
        }
        else{ cout<<c<<"is largest";
        }
    }
}



        
    