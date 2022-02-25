#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n to print the pattern : ";
    cin >> n;

    int sp = n / 2, st = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= sp; s++)
        {
            cout << "\t";
        }
        for (int star = 1; star <= st; star++)
        {
            cout << "*\t";
        }
        if (i <= n / 2)
        {
            sp--;
            st += 2;
        }
        else
        {
            sp++;
            st -= 2;
        }
        cout << endl;
    }
}