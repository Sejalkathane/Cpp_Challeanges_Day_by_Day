#include <bits/stdc++.h>
using namespace std;

int main()
{
    // if power then n ans n-1 will be zero nither not
    int n = 80;
    if ((n & (n - 1)) == 0)
        cout << "True";
    else
        cout << "False";

    return 0;
}