#include <bits/stdc++.h>
using namespace std;
#define nl cout<<"\n"
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long 
#define ms(a) memset(a,0,sizeof a);
const int MOD=1e9+7;
ll fpow(ll a,ll b){ll res=1;for(;b;b>>=1,a=(a*a)%MOD)if(b&1)res=(res*a)%MOD;return res;}
ll inv(ll a){return fpow(a,MOD-2);};

ll freq[1005],temp[1005],res[1005],n,k,x;
ll dp[1005][1005];
bool cur_empty;
void mul()
{
   while(k)
   {
      if(k&1 and cur_empty){
          fr(i,n)res[i]=freq[i];
          cur_empty=false;
      }
      else if(k&1)
      {
          ms(temp);
          fr(i,n)fr(j,n){int ij=dp[i][j];
              temp[ij]=temp[ij]+(res[i]*freq[j]);
              if(temp[ij]>=MOD)temp[ij]%=MOD;
          }
          fr(i,n)res[i]=temp[i];
      }
      ms(temp);
      fr(i,n)fr(j,n){
          int ij=dp[i][j];
          temp[ij]=temp[ij]+(freq[i]*freq[j]);
          if(temp[ij]>=MOD)temp[ij]%=MOD;
      }
      fr(i,n)freq[i]=temp[i];
      k/=2;
   }
}

int main() {
 ios_base::sync_with_stdio(false);cin.tie(nullptr);
 
 int tst;cin>>tst;while(tst--)
 {
    cin>>n>>k;ll kk=k;cur_empty=true;
    ms(freq);fr(i,n)fr(j,n)dp[i][j]=(i*j)%n;
    fr(i,n)cin>>x,freq[x]++;
     mul();
    ll num=0;fr(i,n)num=(num+res[i]*i)%MOD;
    ll den=fpow(n,kk);cout<<((num*inv(den))%MOD)<<"\n";
 }
}
