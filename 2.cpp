#include<bits/stdc++.h>
#define vi vector<int>
#define vl vector<ll>
#define vpl vector<pair<ll,ll>>
#define mii map<int,int>
#define pii pair<int,int>
#define pb push_back
#define mpf(a,r) a.find(r)!=a.end()
#define _for(i,n) for(int i=0;i<n;i++)
#define _for_(i,a,n) for(int i=a;i<n;i++)
#define ll long long 
#define mod 1000000007
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,x1,x2,x3,v1,v2; cin>>t; 
    while(t--){
        cin>>x1>>x2>>x3>>v1>>v2;
        int d1=abs(x1-x3);
        int d2=abs(x2-x3);
        if((d1/v1)<(d2/v2)) cout<<"Chef\n";
        else if((d1/v1)>(d2/v2)) cout<<"Kefa\n";
        else cout<<"Draw\n";
    }
    return(0);
}