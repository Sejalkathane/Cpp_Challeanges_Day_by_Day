#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    // nth print fibo
    int n = 6;
    cout << fib(n) << endl;

    return 0;
}
