#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int h,p;
	    cin>>h>>p;
	    bool flag = false;
	    while(p > 0){
	        h = h- p;
	        if(h <= 0){
	            flag = true;
	            break;
	        }
	        p = p/2;
	    }
	    if(flag){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
