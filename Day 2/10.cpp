#include <bits/stdc++.h>
using namespace std;

struct Data
{
    int a = 10;
    char b = 'a';
    float c = 12.43;
    void printer();
};

void Data::printer()
{
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}

int main()
{
    struct Data d;
    d.printer();
}