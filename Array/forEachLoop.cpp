#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {4, 3, 8, 2, 9};

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
            v[i] *= 2;
        else
            v[i] *= v[i];
        //     cout<<v[i]<<"ele";
        //    }
        for (int ele : v)
        {
            cout << ele <<" ";
        }
        // }
    }
}