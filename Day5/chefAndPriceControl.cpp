#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    int totalLoss = 0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i] > k){
	            totalLoss += a[i]-k;
	        }
	    }
	    cout<<totalLoss<<endl;
	}
	return 0;
}
