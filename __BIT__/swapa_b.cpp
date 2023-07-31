#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=5,b=7;

    a=a^b;
    b=a^b;
    a=a^b;

    cout<<"a: "<<a<<" b: "<<b;
    return 0;
}