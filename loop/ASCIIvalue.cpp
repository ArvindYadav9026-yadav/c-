#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Numnber of Terms :";
    cin>>n;
    for(int i =65; i<=n; i++){
        cout<<i  <<(char)i<<endl;
    }
}