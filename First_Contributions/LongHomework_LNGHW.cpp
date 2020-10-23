/*
	@author: snishekh
*/

#include <ext/rope>
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/assoc_container.hpp>

#define p(x) cout<<x<<"\n"
#define pp(x, y) cout<<x<<" "<<y<<"\n"
#define rep(i, n) for(int i=0; i<n; i++)
#define repA(i, a, n) for(int i=a; i<n; i++)
#define repD(i, a, n) for(int i=a; i>=n; i--)
#define trav(it, ctr) for(auto it=ctr.begin(); it!=ctr.end(); it++)
#define travD(it, ctr) for(auto it=ctr.rbegin(); it!=ctr.rend(); it++)
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

#define X first
#define Y second
#define N 200001


#define PI 3.1415926535897932384626433832795L



using namespace std;
using namespace __gnu_cxx;
using namespace __gnu_pbds;


using namespace std::chrono;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef priority_queue<int> pq;
typedef priority_queue<int, vi, greater<int>> mpq; 


typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

const int mod=1e9+7;


auto print = [](const int& n) { std::cout << n << " "; };


namespace random_generation{
    
    unsigned seed1 = system_clock::now().time_since_epoch().count();
    
    std::mt19937 g1 (seed1);  
    
    
    
    int a, b;
    const int rolls=1000;
    const int interval=100;
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(a, b);
    
    
    int rand(int a, int b){return a + g1()%(b-a+1);}
};


 
#ifdef TRACE
    #define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template <typename Arg1>
    void __f(const char* name, Arg1 && arg1){
    	cerr << name << " : " << arg1 << std::endl;
    }
    template <typename Arg1, typename... Args>
    void __f(const char* names, Arg1 && arg1, Args &&... args){
    	const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
    }
#else
    #define trace(...)
#endif

#define MOD mod
namespace mod_arith{
    template<typename T>
    T gcd(T a, T b){
        return(b?__gcd(a,b):a);
    }
    template<typename T>
    T lcm(T a, T b){
        return(a*(b/gcd(a,b)));
    }
    int add(int a, int b, int c = MOD){
        int res=a+b;return(res>=c?res-c:res);
    }
    int mod_neg(int a, int b, int c = MOD){
        int res;
        if(abs(a-b)<c)
            res=a-b;
        else res=(a-b)%c;
        return(res<0?res+c:res);
    }
    int mul(int a, int b, int c = MOD){
        ll res=(ll)a*b;
        return(res>=c?res%c:res);
    }
    ll mulmod(ll a, ll b, ll m = MOD){
        ll q = (ll)(((ld)a*(ld)b)/(ld)m);
        ll r=a*b-q*m+0ll;
        if(r>m)
            r%=m;
        if(r<0)
            r+=m;
        return r;
    }
    template<typename T>T 
    expo(T e, T n){
        T x=1, p=e;
        while(n){
            if(n&1)
                x=x*p;
            p=p*p;
            n>>=1;
        }
        return x;
    }
    template<typename T>T
    power(T e, T n, T m = MOD){
        T x=1, p=e;
        while(n){
            if(n&1)
                x=mul(x,p,m);
            p=mul(p,p,m);
            n>>=1;
        }
        return x;
    }
    template<typename T>
    T extended_euclid(T a, T b, T &x, T &y){
        T xx=0, yy=1;
        y=0, x=1;
        while(b){
            T q=a/b, t=b;
            b=a%b;
            a=t;
            t=xx;
            xx=x-q*xx;
            x=t;
            t=yy;
            yy=y-q*yy;
            y=t;
        }
        return a;
    }
    template<typename T>
    T mod_inverse(T a, T n = MOD){
        T x, y , z=0;
        T d=extended_euclid(a, n, x, y);
        return(d>1?-1:mod_neg(x, z, n));
    }
};
set<ii> res[N];
int32_t main(){
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, q, m, x;
	cin>>n>>q>>m;
	rep(i, n){
	    cin>>x;
	    res[x%m].insert({x, i+1});
	}
	while(q--){
	    cin>>x>>n;
	    if(n>=m){
	        p(-1);
	        continue;
	    }
	    if(x>res[n].size()){
	        p(-1);
	        continue;
	    }
	    auto it=res[n].begin();
	    advance(it, x-1);
	    p((*it).Y);
	}
    return 0;
}