#include <iostream>
using namespace std;
int main()
{
    int n, num, i;
    cout << "Enter the size of the array " << endl;
    cin >> n;

    int a[n];
    cout << "Enter the elements of the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the index at which number should be inserted " << endl;
    cin >> num;
    n = n + 1;
    for (int i = n - 2; i >= num; i--)
    {
        a[i + 1] = a[i];
    }
    cout << "Enter number which should be inserted " << endl;
    cin >> a[num];
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}