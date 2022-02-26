#include <iostream>
using namespace std;

int getSum(int b, int n1, int n2)
{
    int ans = 0, carry = 0, power = 1;
    while (n1 != 0 || n2 != 0 || carry != 0)
    {
        int ld1 = n1 % 10;
        int ld2 = n2 % 10;
        n1 /= 10;
        n2 /= 10;
        int sum = ld1 + ld2 + carry;
        int q = sum / b;
        int r = sum % b;
        ans += (r * power);
        carry = q;
        power *= 10;
    }
    return ans;
}

int main()
{
    int b, n1, n2;
    cout << "Enter base of the two numbers : " << endl;
    cin >> b;
    cout << "Enter the two numbers : " << endl;
    cin >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
}