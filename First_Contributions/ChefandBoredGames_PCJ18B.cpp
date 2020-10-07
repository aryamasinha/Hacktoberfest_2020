#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;    
    int ans[1001];
    for(n=1;n<=1000;n++)
    {
        ans[n]=0;
        for(i=1;i<=n;i+=2)
        {
            ans[n]+=((n-i+1)*(n-i+1));
        }
    }
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n);
       printf("%d\n",ans[n]);
       for(i=1;i<=n;i+=2)
       {
           ans+=((n-i+1)*(n-i+1));
       }
    }    
    return 0;
}
