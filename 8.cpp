#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    cout << ar;

    int *p = ar;
    cout << *p << endl;
    cout << ar << endl;
    cout << &ar[0] << endl;
}