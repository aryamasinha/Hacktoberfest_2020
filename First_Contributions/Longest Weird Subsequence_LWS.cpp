#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,k,max,len,x;
    cin>>t;
    while(t--)
    {
        string s;
        long long int a[26][26]={0};
        cin>>s;
        long long int first[26]={0};
        long long int second[26]={0};
        len=s.length();
        for(i=0;i<len;i++)
        {
            x=s[i]-'a';
            for(k=0;k<26;k++)
            {
                max=-1;
                for(j=0;j<=x;j++)
                {
                    if(a[j][k]>max)
                    max=a[j][k];
                }
                first[k]=max+1;
            }
            for(j=0;j<26;j++)
            {
                max=-1;
                for(k=25;k>=x;k--)
                if(a[j][k]>max)
                max=a[j][k];
                second[j]=max+1;

            }
            for(j=0;j<26;j++)
            a[j][x]=second[j];
            for(j=0;j<26;j++)
            a[x][j]=first[j];
        }
        long long int ans=-1;
        for(i=0;i<26;i++)
        for(j=0;j<26;j++)
        if(a[i][j]>ans)
        ans=a[i][j];
        cout<<ans<<endl;
    }
    return 0;
}
