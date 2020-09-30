#include<bits/stdc++.h>

using namespace std;

const int maxN=100005;
int p[maxN], q[maxN];
int n,k,x,d;

long long add(long long n, long long x){
    return (n*(n-1)-(n-x)*(n-x-1))/2;
}

void solve(){
    cin>>n>>k>>x>>d;

    for (int i=1;i<=k;i++)
        scanf("%d",&p[i]);

    if (x<n){
        printf("-1\n");
        return;
    }

    int rest=n-k;
    sort(p+1,p+k+1);

    long long last=-1e9;

    int sz=0;

    for (int i=1;i<=k;i++)
    if ((p[i]-last)<=d || (i!=k && p[i+1]-p[i]<=d)){
        last=p[i];
        q[++sz]=p[i];
    }
    else{
        last=min(p[i]+d,x);
        if (last==p[i]) last--; //case when p[k]=x and need one more
        q[++sz]=p[i];
        q[++sz]=last;
        rest--;
    }

    q[++sz]=x+1;

    sort(q+1,q+sz+1);

    long long ans=0;

    for(int i=1;i<sz;i++)
        ans+=q[i];

    if (rest<0){
        printf("-1\n");
        return;
    }

    if (rest==1 && q[sz-1]+d<x){
        ans+=q[sz-1]+d;
        cout<<ans<<endl;
        return;
    }

    for (int i=sz;i>0;i--){
        int p=min(q[i]-q[i-1]-1,rest);
        ans+=add(q[i],p);
        rest-=p;
        if (!rest) break;
    }

    cout<<ans<<'\n';

}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}