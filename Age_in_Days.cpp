#include<iostream>
using namespace std;
int main()
{
    long long a;
    cin >> a;
    int b,c,d,e;
    b = a/365;
    cout << b << " years" << endl;
    c = a%365;
    d = c/30;
    cout << d << " months" << endl;\
    e = c%30;
    cout << e << " days" << endl;

    return 0;
}