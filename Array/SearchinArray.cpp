#include<iostream>
using namespace std;
int main(){
    int arr[]={23,56,323,34,3243,45};
    int n =sizeof(arr)/4;
    int target=34;
    bool flag =false;
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            flag=true;
        break;
        }
        
    }
    if(flag==true) cout<<"Element are found";
    else cout<<"Elment are not found";
}