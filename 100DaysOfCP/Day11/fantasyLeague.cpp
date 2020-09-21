#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,s;
	    cin>>n>>s;
	    int p[n];
	    int type[n];
	    for(int i=0;i<n;i++){
	        cin>>p[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>type[i];
	    }
	    int min1 = 100000;
	    int min2 = 100000;
	    for(int i=0;i<n;i++){
	        if(type[i] == 0){
	            min1 = min(min1,p[i]);
	        }
	        else{
	            min2 = min(min2,p[i]);
	        }
	    }
	    if(s+min1+min2 > 100){
	        cout<<"no"<<endl;
	    }
	    else{
	        cout<<"yes"<<endl;
	    }
	}
	return 0;
}
