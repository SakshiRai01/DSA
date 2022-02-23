#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int num1, num2;
    cout << "Enter two number to calculate hcf and lcm : ";
    cin >> num1 >> num2;

    int gcd = 0, lcm = 0;
    for (int i = 1; i <= num1; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }
    cout << "HCF is : " << gcd << endl;
    lcm = (num1 * num2) / gcd;
    cout << "LCM is : " << lcm << endl;
}