#include<bits/stdc++.h>
using namespace std;

struct Data
{
    int x;
    char c;
    float f;

    void print()
    {
        cout<<x<<endl;
        cout<<c<<endl;
        cout<<f<<endl;
    }

};

int main()
{
    struct Data d;
    d.x = 7;
    d.c = 'm';
    d.f = 5.67;
    d.print();

}