#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the qrray " << endl;
    cin >> n;

    int a[n];
    cout << "Enter the elements of the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the elements to be deleted " << endl;
    int num, t;
    cin >> num;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            t = i;
        }
    }

    for (int i = t; i < n; i++)
    {
        a[i] = a[i + 1];
        n = n - 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}