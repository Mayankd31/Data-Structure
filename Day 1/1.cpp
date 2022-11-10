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

    cout << "Traversing Array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
