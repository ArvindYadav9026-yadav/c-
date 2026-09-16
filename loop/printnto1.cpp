#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Numnber :";
    cin>>n;
    // for(int i=n; i>=1;i--){
    //     cout<<i<<endl;
    // }
    for(int i=1; i<=n; i++){
        cout<<n+1-i<<" ";
    }
}