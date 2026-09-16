#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="abc";
    string s2 ="xyz";
    string s3=s1+s2;
    cout<<s3<<endl;

    string s="abc";
    cout<<s+'4'<<endl; // error;

    string s4="ragav";
    s4+="Grag";
    cout<<s4<<endl;
}