#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1[n],a2[n],a3[n];
    for(int i=0;i<n;i++)
    {
        cin>>a1[i]>>a2[i]>>a3[i];
    }
    int x=0,y=0,z=0;
    for(int i=0;i<n;i++)
    {
        x=x+a1[i];
        y=y+a2[i];
        z=z+a3[i];
    }
    if(x==0&&y==0&&z==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
