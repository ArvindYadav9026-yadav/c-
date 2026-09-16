#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Numnber :";
    cin>>n;
    for(int i=n; i<=n*10;i+=n){
        cout<<i<<endl;
    }
}