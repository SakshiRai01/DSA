#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int temp;
    cout << "The digits of the number in reverse order is : " << endl;
    while (n)
    {
        temp = n % 10;
        cout << temp << endl;
        n /= 10;
    }
}