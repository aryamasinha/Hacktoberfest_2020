#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int x[n];
	    for(int i=0;i<n;i++){
	        cin>>x[i];
	    }
	    int minimum = INT_MAX;
	    int maximum = INT_MIN;
	    int count = 1;
	    for(int i=1;i<n;i++){
	        if(abs(x[i]-x[i-1]) <= 2){
	            count++;
	        }
	        else{
	            maximum = max(maximum,count);
	            minimum = min(minimum,count);
	            count = 1;
	        }
	    }
	    maximum = max(maximum,count);
	    minimum = min(minimum,count);
	    cout<<minimum<<" "<<maximum<<endl;
	}
	return 0;
}
