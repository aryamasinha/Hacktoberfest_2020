#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    char a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=n-1;i>n-k-1;i--){
	        if(a[i] == 'H'){
	           for(int j=0;j<i;j++){
	               if(a[j] == 'H'){
	                    a[j] = 'T';
	               }
	               else{
	                    a[j] = 'H';
	               }
	            }
	        }
	    }
	    int hcount = 0;
	    for(int i=0;i<n-k;i++){
	        if(a[i] == 'H'){
	            hcount++;
	        }
	    }
	    cout<<hcount<<endl;
	}
	return 0;
}
