#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n, k;
    cout << "Enter the digit and k to rotate the number : ";
    cin >> n >> k;
    int count = 0, temp = n;
    while (temp)
    {
        temp = temp / 10;
        count++;
    }
    k = k % count;
    if (k < 0)
        k += count;
    int divisor = pow(10, k);
    int multiplier = pow(10, count - k);
    int fp = n % divisor;
    int sp = n / divisor;
    int ans = fp * multiplier + sp;
    cout << ans;
}