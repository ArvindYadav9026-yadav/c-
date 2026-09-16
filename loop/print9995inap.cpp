#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Numnber of Terms :";
    cin>>n;
    int a=99, d=4;
    for(int i=1; i<=n; i++){
        if(a>=0){
            cout<<a<<" ";
            a-=d;
        }
       
    }
}