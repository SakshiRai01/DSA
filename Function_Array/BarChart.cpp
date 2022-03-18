#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > m)
            m = a[i];
    }
    for (int k = m; k >= 1; k--)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] >= k)
                cout << "*\t";
            else
                cout << "\t";
        }
        cout << endl;
    }
}