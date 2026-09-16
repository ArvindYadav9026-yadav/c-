#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a first number";
    cin >> a;
    int b;
    cout << "Enter a Second number";
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        bool br = false;
        if (i < 2)
            continue;

        for (int j = 2; j <i; j++)
        {
            if (i % j == 0)
            {
                br = true;
                break;
            }
        }
        if (br == false)
        {
            cout << i << " ";
        }
    }
}
