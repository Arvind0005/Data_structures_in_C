#include<bits/stdc++.h>
using namespace std;
class Mapexp 
{
  public:
    map<int,int> insert(map<int,int> m)
    {
        vector<int> v{1,2,3,4,5,6,7,8,9,0};
        for(int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                pair<int,int> x = pair<int,int>(v[i],v[j]);
                m.insert(x);
                break;
            }
        }
        return m;
    }
   void display(map<int,int> m)
   {
       for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
       {
           cout<<it->first<<" "<<it->second<<"\n";
       }
   }
   map<int,int> erase(map<int,int> m)
   {
       m.erase(1);
       return m;
   }
};
int main()
{
    map<int,int> m;
    Mapexp mapexp;
    m=mapexp.insert(m);
   // m=mapexp.erase(m);
    mapexp.display(m);
    cout<<"erased\n";
    m=mapexp.erase(m);
    mapexp.display(m);
}
