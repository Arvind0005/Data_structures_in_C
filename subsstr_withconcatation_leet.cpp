class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
         vector<int> arr;
        if(s.length()==0 || words.size()==0)
        {
            return arr;
        }
        
        int wlen = words[0].length();
        int nw = words.size();
        unordered_map<string,int> wordf;
       
        for(int i=0;i<nw;i++)
        {
            wordf[words[i]]++;
        }
        string sword;
        for(int i=0;i<s.length()-(nw*wlen)+1;i++)
        {
            sword="";
            unordered_map<string,int> word;
            int nwords=0;
            int dj;
            dj=i;
            for(int j=dj;j<i+wlen;j++)
            {
                sword.push_back(s[j]);
            }
           
            if(wordf[sword]>=1)
            {
                
                word[sword]++;
                nwords++;
                int ni=i;
                if(nwords==nw)
                {
                    if(i==s.length()-(nw*wlen)+1)
                            arr.push_back(i+1);
                    else
                        arr.push_back(i);
                 
                }
                while(true)
                {
                    ni = ni+wlen;
                    sword="";
                    for(int j=ni;j<ni+wlen;j++)
                    {
                        sword.push_back(s[j]);
                    }
                    if(!(wordf[sword]>=1))
                    {
                       
                        break;
                    }
                   
                    word[sword]=word[sword]+1;
                    if(word[sword]>wordf[sword])
                    {
                     
                        break;
                    }
                    nwords++;
                    if(nwords==nw)
                    {
                        if(i==s.length()-(nw*wlen)+1)
                        { 
                       
                            arr.push_back(i+1);
                        }
                        else
                        {
                            cout<<"hello3"<<i<<"\n";
                            arr.push_back(i);
                        }
                        break;
                    }
                }
            }
        }
        return arr;
    }
};
