#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,r;
    cin>>n;
    r=n%10;
    if(r!=0)
        c++;
    r=n%100;
    if(r!=0)
        c++;
        r=n%1000;
    if(r!=0)
        c++;
        r=n%10000;
    if(r!=0)
        c++;
        cout<<c;


}
