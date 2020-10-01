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
    int t; cin>>t; 
    string s;
    while(t--){
       cin>>s;
       int count=0;
       _for(i,s.length()-1){if(s[i+1]>=s[i]) continue; 
                    else {count=1; break;}}
        if(count) cout<<"no\n"; else cout<<"yes\n";
    }
    return(0);
}