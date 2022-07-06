class Solution {
public:
    string convert(string s, int numRows) {
        int len =s.length();
        int arr[numRows][len];
        if(numRows==1 || len==1)
        {
            return s;
        }
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<len;j++)
            {
                arr[i][j]=0;
            }
        }
        int k=0;
        int si=0;
        
        for(int c=0;c<len;c++)
        {
           
            if(k==0)
            {
            // if(si+1>=len)
            //  {
            //     break;
            //   }
                for(int i=0;i<numRows;i++)
                {
                    arr[i][c]=s[si];
                     if(k+1>=numRows || si+1>=len)
                    {
                         // if(si+1>numRows && si+1<len)
                         //  { 
                         //     si++;
                         //   }
                         si++;
                        break;
                    }
                    si++;
                    
                   
                }
                k=numRows-1-1;
            }
            else
            {
                
                arr[k][c]=s[si];
             
             if(si+1>=len)
                {
                    break;
                }
                si++;
                k--;
            }
            if(si==len)
             {
                break;
              }
            
        }
        string finalstr;
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<len;j++)
            {
                if(arr[i][j]!=0)
                {
                    char ch =arr[i][j];
                    cout<<ch;
                    finalstr+=ch;
                }
            }
           cout<<"\n";
        }
      //  cout<<finalstr;
        return finalstr;
    }
};
