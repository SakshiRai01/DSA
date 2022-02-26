#include <iostream>
#include <math.h>
using namespace std;
int AnyToAny(int n, int b1, int b2)
{
    int ans = 0, i = 0;
    if (b1 != 10)
    {
        while (n)
        {
            int temp = n % 10;
            ans += temp * pow(b1, i);
            i++;
            n /= 10;
        }
    }
    else
    {
        ans = n;
    }
    static int out = 0, j = 0;
    while (ans)
    {
        int temp = ans % b2;
        out += temp * pow(10, j);
        j++;
        ans /= b2;
    }
    return out;
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int b1;
    cout << "Enter the base of the number entered : ";
    cin >> b1;
    int b2;
    cout << "Enter the base in which number is to be converted : ";
    cin >> b2;
    int res = AnyToAny(n, b1, b2);
    cout << res << endl;
}