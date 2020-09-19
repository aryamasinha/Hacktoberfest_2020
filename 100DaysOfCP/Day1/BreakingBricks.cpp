#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int s,w1,w2,w3;
	    cin>>s>>w1>>w2>>w3;
	    int totalHits;
	    if(w1+w2+w3 <= s){
	        totalHits = 1;
	    }
	    else{
	        if((w1+w2) <= s || (w2+w3) <= s){
	            totalHits = 2;
	        }
	        else{
	            totalHits = 3;
	        }
	    }
	    cout<<totalHits<<endl;
	}
	return 0;
}
