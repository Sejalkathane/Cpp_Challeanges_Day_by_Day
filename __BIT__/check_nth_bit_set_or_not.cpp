#include <bits/stdc++.h>
using namespace std;

int main()
{
    // example : 13 =: 1 1 0 0 1
    // we put 1 that bit remain are 0
    // for example check 3 bit set or not put 3rd position 1 ie : 1 0 0 0
    // to put 1 at that bit we use shift fro example we have 1 in 1st then move toward left till n

    int n = 13;
    int i = 2;

    int mask = 1 << i;
    bool a = (mask & n);
    if (a == 1)
        cout << "True";
    else
        cout << "False";
}