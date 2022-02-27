#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cout << "Enter n to print pattern : ";
    cin >> n;
    int val = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << val << "\t";
            val++;
        }
        cout << endl;
    }
}