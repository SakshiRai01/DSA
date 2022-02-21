#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter range : ";
    cin >> n;
    int a = 0, b = 1, sum = 0;
    cout << a << endl
         << b << endl;
    n = n - 2;
    while (n)
    {
        sum = a + b;
        cout << sum << endl;
        a = b;
        b = sum;
        n--;
    }
}