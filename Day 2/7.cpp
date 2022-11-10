#include <bits/stdc++.h>
using namespace std;

int call_by_value(int n)
{
    cout << "Address of n call_by_value function: " << &n << endl;
    n *= n;
    return n;
}

void call_by_refrence_pointer(int *n)
{
    cout << "Address of n call_by_refrence function: " << n << endl;
    *n *= *n;
}

void call_by_refrence_address(int &n)
{
    cout<<"Address of n in call_by_refrence function: "<<&n<<endl;
    n *= n; 
}

int main()
{
    int n = 8;
    cout << "Address of n in main(): " << &n << endl;
    call_by_refrence_address(n);
    cout << "ans: " << n << endl;
    cout << "value of n: " << n << endl;
    return 0;
}