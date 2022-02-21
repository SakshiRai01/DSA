#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int d = 0, temp;
    while (n)
    {
        temp = n % 10;
        d++;
        n /= 10;
    }
    cout << "The number of digits in the number is " << d;
}