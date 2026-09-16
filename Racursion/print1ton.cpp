#include<iostream>
using namespace std;
void print(int m,int n){
if(m>n) return;
cout<<m;
print(m+1,n);
}
int main(){
    int n;
    cin>>n;
    print(1,n);
}