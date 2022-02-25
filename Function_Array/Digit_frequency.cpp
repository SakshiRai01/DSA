#include <iostream>
using namespace std;
int digFreq(int n, int d)
{
    int count = 0;
    while (n)
    {
        int temp = n % 10;
        if (temp == d)
        {
            count++;
        }
        n /= 10;
    }
    return count;
}
int main()
{
    int n, d;
    cout << "Enter number and digit for frequency : ";
    cin >> n >> d;
    int res = digFreq(n, d);
    cout << res << endl;
}