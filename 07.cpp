#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>> a >> b;
    for( int i = a;i>=1; i--){
    if(i%b==0)
    {
        cout<<i<<endl;
    }
    }


    return 0;


}