// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int arr[str.length()][str.length()]={0};
    int length=0,gl=0;
    if(str.length()!=0)
    {
        gl=1;
    }
    for(int i=0;i<str.length();i++)
    {
        arr[i][i]=1;
        if(str[i]==str[i+1])
        {
            arr[i][i+1]=1;
            gl=2;
        }
        else
            arr[i][i+1]=0;
    }
    int k=1;
    if(str.length()>2)
    {
        for(int i=0;i<str.length();i++)
        {
            k+=1;
            for(int j=0;j<str.length();j++)
            {
                if(j+k>str.length()-1)
                {
                    break;
                }
                if(str[j]==str[j+k] && arr[j+1][(j+k)-1]==1)
                {
                    arr[j][j+k]=1;
                    length=k+1;
                    if(length>gl)
                    {
                        gl=length;
                    }
                }
                else
                {
                    arr[j][j+k]=0;
                }
            }
            if(k==str.length()-1)
            {
                break;
            }
        }
    }
    cout<<gl;
}
