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

    int num, count;
    cout << "Enter the number to be searched " << endl;
    cin >> num;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            cout << a[i] << " is found at " << i << endl;
            count = 1;
        }
    }

    if (count != 1)
    {
        cout << "Number is not found " << endl;
    }
}