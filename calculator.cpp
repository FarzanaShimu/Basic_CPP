#include<iostream>
using namespace std;
int main()
{
    int a,b,d = 0;
    char c;
    cin >> a >> c >> b;
    if (c == '+')
    {
        cout << a+b << endl;

    }
    else if( c == '-')
    {
        cout << a-b << endl;
    }
    else if( c == '*')
    {
        cout << a*b << endl;
    }
    else if( c == '/')
    {
        cout << a/b << endl;
    }
    return 0;

}