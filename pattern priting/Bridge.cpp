#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    for(int i=1; i<=2*n-1;i++){
        cout<<" *";
    }
        cout<<endl;

    
   

    for(int i=1; i<=n-1;i++){
        for(int j=n-i; j>=1; j--){
            cout<<" *";
        }
        for(int k=1 ; k<=2*i-1; k++){
            cout<<" ";
        }
         for(int l=n-i; l>=1; l--){
            cout<<" *";
        }
        cout<<endl;
    }
    
    
}