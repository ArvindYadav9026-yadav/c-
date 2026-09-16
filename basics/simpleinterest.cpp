#include <iostream>
using namespace std;
int main()
{
    float principle;
    cout << "Enter a principle number:";
    cin >> principle;
    float rate;
    cout << "Enter a rate:";
    cin >> rate;
    float time;
    cout << "Enter a Time:";
    cin >> time;
    float simple_interest = (principle*rate*time)/100;
    cout<<"Simple interest:"<<simple_interest;
}