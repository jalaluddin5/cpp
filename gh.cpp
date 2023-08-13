#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int max=v[0],min=v[0],c=0,b=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==v[i+1])
            continue;
            if(max<v[i])
            {
                c=i;
                max=v[i];
            }

            if(min>=v[i])
            {
                b=i;
                min=v[i];
            }



    }
    cout<<c<<" "<<b;

    return 0;


}
