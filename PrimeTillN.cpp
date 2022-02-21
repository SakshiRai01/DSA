#include <bits/stdc++.h>
using namespace std;

int main()
{
    int low, high;
    cout << "Enter range: ";
    cin >> low >> high;
    // low and high deatermines the range
    for (int i = low; i <= high; i++)
    {
        int count = 0;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
            cout << i << endl;
    }
}