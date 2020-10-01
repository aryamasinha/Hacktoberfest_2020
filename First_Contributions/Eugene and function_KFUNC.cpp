#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int t,a,d,l,r,sum9,cnt;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin >> t;
	while (t--) {
	    cin >> a >> d >> l >> r;
	    a = 1+(a-1)%9;
	    d = 1+(d-1)%9;
	    sum9 = 0;
	    for (int i=0; i<9; i++) {
	        sum9 += 1+(a+d*i-1)%9;
	    }
	    cnt = (r-l)/9*sum9;
	    r = (r-l)%9+l;
	    r -= l-(1+(l-1)%9);
	    l = 1+(l-1)%9;
	    for (int i=l; i<=r; i++) {
	        cnt += 1+(a+d*i-d-1)%9;
	    }
	    cout << cnt << "\n";
	}
	return 0;
}
