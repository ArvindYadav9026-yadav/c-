#include<iostream>
#include<iterator>
using namespace std;
int main(){
    int marks[]={74,96,91,57,62,35};
    //cout<<size(marks)<<endl;// right but give error in old c++;
    cout<<sizeof(marks)/4<<endl;
    cout<<marks[2]<<endl;
    marks[2]=23;
    cout<<marks[2]<<endl;
}