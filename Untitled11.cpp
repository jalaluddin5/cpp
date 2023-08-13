#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int max=v[0],min=v[0],ma=0,mi=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=v[i+1])
        {
            if(max<v[i])
                ma=i;
            if(min>v[i])
                mi=i;
        }


    }
    cout<<ma<<" "<<mi;


}
