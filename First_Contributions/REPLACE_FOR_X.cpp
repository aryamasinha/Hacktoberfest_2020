//I LOVE MY CODES 3000 TIMES 
//NEVER GIVE UP
//WHATEVER IT TAKES
#include<bits/stdc++.h>
using namespace std ;
#define ll long long int 
#define loop(i,a,b) for(i=a;i<b;i++) 
#define Rloop(i,a,b) for(i=a;i>=b;i--)
#define AVENGERS ios_base::sync_with_stdio(false);cin.tie(NULL);
#define INFINITYWAR ll t;cin>> t;while(t--)
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define pb push_back
#define sub(b,c) substr(b,c)
#define sorted(a,n) is_sorted(a,a+n)
//YOU ARE IN ENDGAME NOW,DISPLAY YOUR CODE HERE

int main(){
AVENGERS
INFINITYWAR{
ll n,x,p,k;
cin >> n >> x >> p >> k;
ll a[n],i;
loop(i,0,n){
cin >> a[i];
}
ll e=0;
sort(a,a+n);
if(a[p-1]==x)
cout << 0 << "\n";
else if(k>=p && a[p-1]>=x){
i=p-1;
while(i>=0 && a[i]>x)
{
 e++;
i--;
}
cout << e << "\n";
}
else if(p>=k && a[p-1]<=x){
i=p-1;
while(i<n && a[i]<x)
{
 e++;
 i++;
}
cout << e << "\n";
}
else
cout << -1 << "\n";
}

return 0;
}
