class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> m;
        for(auto c : t)
            m[c]++;
        size_t end=0,start=0,minstart=0,counter=t.size(),minlen=INT_MAX,size=s.size();
        while(end<size)
        {
            if(m[s[end]]>0)
                counter--;
            m[s[end]]--;
            end++;
            while(counter==0)
            {
                cout<<"h";
                if((end-start)<minlen)
                {
                    minstart=start;
                    minlen=end-start;
                }
                m[s[start]]++;
                if(m[s[start]]>0)
                    counter++;
                start++;
            }
        }
        cout<<"\nstart "<<start;
        if(minlen==INT_MAX)
            return "";
        return s.substr(minstart,minlen);
    }
};
