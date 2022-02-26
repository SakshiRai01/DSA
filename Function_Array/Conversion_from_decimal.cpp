#include <iostream>
#include <math.h>
using namespace std;
int DecToAny(int n, int b)
{
    int ans = 0, i = 0;
    while (n)
    {
        int temp = n % b;
        ans += temp * pow(10, i);
        i++;
        n /= b;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int b;
    cout << "Enter the base of the number : ";
    cin >> b;
    int res = DecToAny(n, b);
    cout << res << endl;
}