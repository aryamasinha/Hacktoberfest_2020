#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    long long int n,k,temp;
	    cin>>n>>k;
	    long int a[n];
	    for(long long int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    if((n-k) < k){
	        temp = n-k;
	    }
	    else{
	        temp =k;
	    }
	    sort(a,a+n);
	    long int sum1 = 0;
	    long int sum2 = 0;
	    for(long long int i=0;i<temp;i++){
	        sum1 += a[i];
	    }
	    for(long long int i=temp;i<n;i++){
	        sum2 += a[i];
	    }
	    long int diff = sum2 - sum1;
	    cout<<abs(diff)<<endl;
	}
	return 0;
}
