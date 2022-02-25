#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int nspace = 0;
    int nstar = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nspace; j++)
        {
            cout << "\t";
        }
        for (int j = 1; j <= nstar; j++)
        {
            cout << "*\t";
        }

        nstar--;
        nspace++;
        cout << endl;
    }
}