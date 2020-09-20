#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    long long sum = 0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        sum+= a[i];
	    }
	    cout<<sum%k<<endl;
	}
	return 0;
}
