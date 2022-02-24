#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n to print the pattern : ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*\t";
        }
        cout << endl;
    }
}
