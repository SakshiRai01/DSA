#include <iostream>
#include <math.h>
using namespace std;
int AnyToDec(int n, int b)
{
    int ans = 0, i = 0;
    while (n)
    {
        int temp = n % 10;
        ans += temp * pow(b, i);
        i++;
        n /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int b;
    cout << "Enter the base of thr number : ";
    cin >> b;
    int res = AnyToDec(n, b);
    cout << res << endl;
}