#include <iostream>
using namespace std;

int getDifference(int b, int n1, int n2)
{
    int rv = 0, c = 0, p = 1;
    while (n2 > 0)
    {
        int d1 = n1 % 10;
        int d2 = n2 % 10;
        n1 /= 10;
        n2 /= 10;
        int d = d2 - d1 - c;

        if (d < 0)
        {
            c = 1;
            d += b;
        }
        else
        {
            c = 0;
        }
        rv += d * p;
        p *= 10;
    }
    return rv;
}

int main()
{
    int b, n1, n2;
    cout << "Enter the base of the numbers : ";
    cin >> b;
    cout << "Enter the 2 numbers such that 2nd number is greater than the first : ";
    cin >> n1 >> n2;
    cout << getDifference(b, n1, n2);
}