class Solution {
public:
    string longestPalindrome(string s) 
    {
        int len = s.length();
        if(len==1)
        {
            return s.substr(0,1);
        }
        int max_len=0,start=0,end=0;
        int arr[s.length()][s.length()];
        for(int i=0;i<len;i++)
        {
            arr[i][i]=1;
            if(s[i]==s[i+1])
            {
                max_len=2;
                start=i;
                end=i+1;
                arr[i][i+1]=1;
            }
            else
            {
                if(i+1>len)
                {
                    arr[i][i+1]=0;
                }
                
            }
        }
        int k=1;
        for(int i=0;i<len;i++)
        {
           k=k+1;
            for(int j=0;j<len;j++)
            {
                if(j+k>(len-1))
                {
                    break;
                }
                if(s[j]==s[j+k] && arr[j+1][(j+k)-1]==1)
                {
                    arr[j][j+k]=1;
                    if((((j+k)-j)+1)>max_len)
                    {
                        max_len=((j+k)-j+1);
                        start=j;
                        end=j+k+1;
                    }
                }
                else
                {
                    arr[j][j+k]=0;
                }
            }
           if(k==len-1)
           {
               break;
           }
                
        }
        if(max_len==0)
        {
            return s.substr(0,1);
        }
        if(max_len==2 && len==2)
        {
            return s.substr(0,2);
        }
        if(s[start]==s[end] || arr[start+1][end-1]==1)
        {
            cout<<"true";
        }
        cout<<start<<" "<<end<<" "<<max_len;
        return s.substr(start,max_len);
        
    }
};
