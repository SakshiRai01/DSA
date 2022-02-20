#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout << "Enter number for the loop" << endl;
    cin >> t;
    while (t)
    {
        int n, count = 0;
        cout << "Enter the number to check" << endl;
        cin >> n;
        for (int j = 2; j * j <= n; j++)
        {
            if (n % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
            cout << "Prime" << endl;
        else
            cout << "Not prime" << endl;
        t--;
    }
}