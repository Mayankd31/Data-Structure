#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key)
{
    int start = 0;
    int end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == key)
        {
            return mid;
        }

        else if (a[mid] > key)
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

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

    int key;
    cout << "Enter the number you want to search " << endl;
    cin >> key;

    cout << binarySearch(a, n, key) << endl;
}