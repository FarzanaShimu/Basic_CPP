#include<iostream>
using namespace std;
int main()
{
    int a,b,c, min = 0, max =0;
    cin >> a >> b >> c;
    if(a>=b)
    {
        max = a;
        min = b;
    }
    else{
        max = b;
        min = a;
    }
    if (min >= c)
    {
        min = c; 
    }
    if(max <= c)
    {
        max = c;
    }
    cout << min <<" " << max << endl;
    
    return 0;
}