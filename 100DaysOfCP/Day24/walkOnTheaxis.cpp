#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long res = (long long)n*(n+1)/2 + n;
	    cout<<res<<endl;
	}
	return 0;
}
