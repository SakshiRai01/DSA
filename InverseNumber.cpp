#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a valid number : ";
    cin >> n;
    int i = 0, p = 1;
    while (n)
    {
        int digit = n % 10;
        n = n / 10;
        i += p * pow(10, digit - 1);
        p++;
    }
    cout << "After inversing the number is : " << i;
}