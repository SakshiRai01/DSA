#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    int temp, pow = 1;
    temp = n;
    while (temp >= 10)
    {
        temp /= 10;
        pow *= 10;
    }
    temp = n;
    cout << "The digits of the number are : " << endl;
    while (pow)
    {
        int digit = temp / pow;
        cout << digit << endl;
        temp = temp % pow;
        pow /= 10;
    }
}