class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        if(s.length==0 ||)
       int wlen = words[0].length();
        int nw = words.size();
        unordered_map<string,int> wordf;
        vector<int> arr;
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
            if(i==s.length()-(nw*wlen)-1)
            {
                dj=i+1;
            }
            else
            {
                dj=i;
            }
            for(int j=dj;j<i+wlen;j++)
            {
                sword.push_back(s[j]);
            }
            cout<<sword<<" "<<wordf[sword]<<"\n";
            if(wordf[sword]>=1)
            {
                //cout<<"hii1";
                word[sword]++;
                nwords++;
                int ni=i;
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
                        cout<<"hii1 "<<sword<<" "<<wordf[sword]<<"\n";
                        break;
                    }
                    cout<<sword<<" "<<word[sword]<<"\n";
                    word[sword]=word[sword]+1;
                    if(word[sword]>wordf[sword])
                    {
                        cout<<"hii2 "<<sword<<" "<<wordf[sword]<<" "<<word[sword]<<"\n";
                        break;
                    }
                    nwords++;
                    if(nwords==nw)
                    {
                        if(i==s.length()-(nw*wlen)-1)
                            arr.push_back(i+1);
                        else
                            arr.push_back(i);
                        break;
                    }
                }
            }
        }
        return arr;
    }
};
