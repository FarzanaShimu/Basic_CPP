#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    
    for(int i=1;i <=a;i++){
    int x,temp =0;
    
    cin >> x;
    if(x == 0){
        cout << 0 <<endl;
        }
        else{
        while(x!=0){
        temp = x%10;
        cout << temp << " ";
        x /= 10;
        }
        cout << endl;
        }
    }
    
    
    
    return 0;

}