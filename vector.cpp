#include <bits/stdc++.h>
using namespace std;

int main()
{
    //vector declare
    vector<int>vec;

       vec.push_back(5);
       vec.push_back(45);
       vec.push_back(7);

    for (auto it = vec.begin();it!=vec.end();++it){
        cout<<' '<<*it<<endl;
    }


    //vector pop_back
    vec.pop_back();
    cout<<endl;
    //search
    for (auto it = vec.begin();it!=vec.end();++it){

        cout<<' '<<*it<<endl;
        if(*it==45){
          cout<<*it<<' '<<"found it"<<endl;
        }
    }

    //size
    vec.push_back(78);
    vec.push_back(9);

    cout<<vec.size()<<endl;

   return 0;


}
