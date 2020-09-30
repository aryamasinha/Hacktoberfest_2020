#include <bits/stdc++.h>
using namespace std;

int main() {
	long int t;
	cin>>t;
	while(t--){
	    long int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    long int countOnes = 0;
	    for(long int i=0;i<n;i++){
	        if(s[i] == '1'){
	            countOnes++;
	        }
	    } 
	    long int res =  countOnes * (countOnes+1)/2;
	    cout<<res<<endl;
	}
	return 0;
}
