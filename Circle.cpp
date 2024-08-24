#include<iostream>
#include<iomanip> 
using namespace std;
int main()
{
    double R;
    cin >> R;
    double pi = 3.141592653;
    double Area = pi*R*R; 
    //setprecision(Area);
    cout << setprecision(12) << Area << endl;


    return 0;
    }