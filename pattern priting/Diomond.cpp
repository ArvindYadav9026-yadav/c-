#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    //Method 1
//     int nsp=n-1;
//     int nst=1;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=nsp; j++){
//         cout<<"  ";
//     }
//     for(int k=1; k<=nst; k++){
//         cout<<" *";
//     }
//     nsp--;  
//     nst+=2;  
//     cout<<endl;
// }
//  int nsps=1;
//     int nsts=2*n-3;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=nsps; j++){
//         cout<<"  ";
//     }
//     for(int k=1; k<=nsts; k++){
//         cout<<" *";
//     }
//     nsps++;  
//     nsts-=2;  
//     cout<<endl;
// }
//Method2;
int nsp=n-1; 
int nst=1;
for(int i=1; i<=2*n-1; i++){
    for(int j=1; j<=nsp; j++){
        cout<<" ";
    }
    for(int k=1; k<=nst; k++){
        cout<<" *";
    }
    if(i<n){
        nst+=2;
        nsp--;
    }
    else{
        nsp++;
        nst-=2;
    }
    cout<<endl;
}
 


     
    }
