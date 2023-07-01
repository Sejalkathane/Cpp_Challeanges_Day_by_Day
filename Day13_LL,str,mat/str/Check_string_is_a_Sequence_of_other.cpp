#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "ABCDEF";
    string s2 = "ADF";

    int i = 0;
    int j = 0;
    while (i < s1.size())
    {
        if (s1[i] == s2[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    if (j != s2.size())
    {
        cout << "False" << endl;
    }
    else
    {

        cout <<"TRUE"<< endl;
    }
    return 0;
}