#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
   for(int i=0;i<=t;i++)
    {   int x;
        cin >> x;
        int count =0;
        
        while(x>0){
        
        int bit = x % 2;
        if(bit == 1){
            count ++;
            }
        int k=  x/2;
        x = k;
    }

        int sum =0;
        for(int i =1;i<count;i++)
        {
            sum =sum*2+1;
        }
        cout<< sum << endl;
    }

    
    return 0;

}

