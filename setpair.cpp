#include <iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
class Setpair
{
  public:
    set<pair<int,int>> insert(set<pair<int,int>> s)
    {
        vector<int> v{1,2,3,4,5,6,7,8,9};
        for(int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                if(v[i]%2==0 && v[j]%2==0)
                {
                    pair<int,int> x =make_pair(v[i],v[j]);
                    s.insert(x);
                }
            }
        }
        return s;
    }
    void display(set<pair<int,int>> s)
    {
        for(pair<int,int> t : s)
        {
            cout<<t.first<<" "<<t.second<<"\n";
        }
    }
};
int main() {
    
    Setpair setpair;
    set<pair<int,int>> s;
    s=setpair.insert(s);
    setpair.display(s);
   
}
