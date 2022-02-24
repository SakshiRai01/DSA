#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n to print pattern : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*\t";
        }
        cout << endl;
    }
}
