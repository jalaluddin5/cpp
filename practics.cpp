#include<bits/stdc++.h>
using namespace std;

int mian()
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
    int c=0,c1=0,num=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>num)
            c++;

        else
        {
            c=1;
        }
        num=v[i];
        if(c>=c1)
            c1=c;

    }
    cout<<c1<<endl;
}
