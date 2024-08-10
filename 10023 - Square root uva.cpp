#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long b;
    int c;
    int a;

    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        scanf("%lld",&b);

        if(b<0){
            printf("*");

        }
        else{

        c=sqrt(b);
        printf("%d\n",c);


            }



    }

    return 0;
}
