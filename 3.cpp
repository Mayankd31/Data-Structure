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
    int index;
    cout << "Enter the index at which you want to delete that number" << endl;
    cin >> index;

    for (int i = index; i < 4; i++)
    {
        a[i] = a[i + 1];
    }

    cout << "The array after deletion" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << " ";
    }
}
