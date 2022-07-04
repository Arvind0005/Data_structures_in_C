class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       map<char,int> cimap;
        int start=0,end=0;
        int largest=0;
        for(end=0;end<s.length();end++)
        {
            if(cimap.find(s[end])!=cimap.end())
            {
                start=max(start,cimap[s[end]]+1);
            }
            cimap[s[end]]=end;
            largest=max(largest,end-start+1);
        }
        return largest;
    }
};
