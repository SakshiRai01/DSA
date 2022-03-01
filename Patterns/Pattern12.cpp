#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cout << "Enter n to pirnt the pattern : ";
    cin >> n;

    int a = -1, b = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            int c = a + b;
            cout << c << "\t";
            a = b;
            b = c;
        }

        cout << endl;
    }
}