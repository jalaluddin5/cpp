#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)
            break;
        else
        {
            vector<int>v;
            for(int i=0;i<n;i++)
            {
                int x;
                cin>>x;
                v.push_back(x);
            }
            sort(v.begin(),v.end());

            vector<int>v1;
             int sum=v[0];
             for(int i=0;i<n-1;i++)
             {
                 sum=sum+v[i+1];
                 v1.push_back(sum);
             }
             int sum1=0;
             for(int i=0;i<v1.size();i++)
             {
                 sum1=sum1+v1[i];
             }
             cout<<sum1<<endl;
        }
    }
}
