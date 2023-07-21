#include <bits/stdc++.h>
using namespace std;
// valid password if::
//  * At least 4 character
//  *At least one numeric digit
//  *At least one Capital letter
//  *Must not have space or slash(/)
//  *starting character must not br number

int main()
{
    // string str = "a987abC012";
    // string str="/Password123";
    string str="P@ssw0rd";

    if (str.size() < 4)
    {
        cout << "False";
        return 0;
    }
    if (str[0] >= '0' && str[0] <= '9')
    {
        cout<<"False";
        return 0;
    }

    int cap = 0;
    int num = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ' || str[i] == '/')
        {
            cout << "False";
            return 0;
        }

        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            cap++;
        }

        if (str[i] >= '0' && str[i] <= '9')
        {
            num++;
        }
    }
    if (cap > 0 && num > 0)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}