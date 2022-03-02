#include <iostream>
using namespace std;
int main(int agrc, char **argv)
{
    int n;
    cout << "Enter n to print table : ";
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}