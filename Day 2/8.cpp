#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    int *p = ar;
    cout << *p << endl;
    p = p + 2;
    cout << *p << endl;
    p--;
    cout << *p << endl;
}