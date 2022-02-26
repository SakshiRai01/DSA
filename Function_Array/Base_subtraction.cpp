#include <iostream>
using namespace std;

int getDifference(int b, int n1, int n2)
{
    int power = 1, ans = 0, carry = 0;
    while (n2)
    {
        int l1 = n1 % 10;
        int l2 = n2 % 10;
        n1 /= 10;
        n2 /= 10;
        int temp = l2 - l1 + carry;
        if (temp < 0)
        {
            carry = -1;
            temp += b;
        }
        else
        {
            carry = 0;
        }
        ans += temp * power;
        power *= 10;
    }
    return ans;
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