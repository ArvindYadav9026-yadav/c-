#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    for(int i=1; i<=n ; i++){
        if(i%2==0){
        for(int j=1; j<=n; j++){
            cout<<(char)(i+64)<<" ";
        }
    }
        
        
        
        else {
          for(int j=1; j<=n; j++){
            cout<<(char)(i+96)<<" ";
          }
        }
        
        
    
        
        cout<<endl;
        
    }
}