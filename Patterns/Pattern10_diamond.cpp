#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cout << "Enter n to print diamond pattern : ";
    cin >> n;
    int is = -1;
    int os = n / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= os; j++)
        {
            cout << "\t";
        }
        cout << "*";
        for (int k = 0; k <= is; k++)
        {
            cout << "\t";
        }
        if (i > 1 && i < n)
            cout << "*";
        if (i <= n / 2)
        {
            os--;
            is += 2;
        }
        else
        {
            os++;
            is -= 2;
        }
        cout << endl;
    }
}