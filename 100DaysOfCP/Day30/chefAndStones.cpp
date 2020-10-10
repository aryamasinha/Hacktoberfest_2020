#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int n,k;
	    cin>>n>>k;
	    long int a[n],b[n];
	    for(long int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(long int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    long int res = INT_MIN;
	    long int temp;
	    for(long int i=0;i<n;i++){
	        temp = k/a[i];
	        res = max(res,temp*b[i]);
	    }
	    cout<<res<<endl;
	}
	return 0;
}
