#include<iostream>
using namespace std;
int main(){
    int cp ; 
    cout<<"Enter costpricer:";
    cin>>cp;
    int sp;
    cout<<"Enter sellingprice:";
    cin>>sp;
//     if(sp>cp) cout<<"Profit";
//    if(sp<cp) cout<<"loss";
//    if(sp==cp) cout<<"no profit no loss";
 if(sp>cp) cout<<"profit is"<<sp-cp;
   else if(sp<cp) cout<<"Loss is" <<cp-sp;
   else  cout<<"no Profit no Loss";


    
}