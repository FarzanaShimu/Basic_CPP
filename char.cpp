#include<iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if( a >= 'a' && a <= 'z')
    {
        a = a - 32;
        cout << a << endl;
    }
    else if( a >= 'A' && a<= 'Z')
    {
        a = a + 32;
        cout << a << endl;
    }

    return 0;
    
}