#include<bits/stdc++.h>
using namespace std;


int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,c=0,c1=0;
      vector<int>v;
      cin>>n;
      for(int i=0;i<n;i++)
      {
          int x;
          cin>>x;
          if(x%2==0)
            c++;
            if(x%2!=0)
                c1++;
          v.push_back(x);
      }
      vector<int>v1;
      vector<int>v2;
      sort(v.begin(),v.end());

      for(int i=0;i<n;i++)
      {
          if(c==n||c1==n)
          {
             if(v[n-1]%v[i]==0)
                v2.push_back(v[i]);
             else
                v1.push_back(v[i]);
          }
          else
          {
              if(v[i]%2!=0)
            v1.push_back(v[i]);
         else
            v2.push_back(v[i]);
          }


      }
      if(v1.size()==0||v2.size()==0)
        cout<<"-1"<<endl;
      else
      {
           cout<<v2.size()<<" "<<v1.size()<<endl;
           for(int i=0;i<v2.size();i++)
           {
               cout<<v2[i]<<" ";
           }
           cout<<endl;
           for(int i=0;i<v1.size();i++)
           {
               cout<<v1[i]<<" ";
           }
           cout<<endl;

      }

  }



}
