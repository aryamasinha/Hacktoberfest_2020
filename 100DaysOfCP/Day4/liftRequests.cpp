#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,q;
	    cin>>n>>q;
	    long long distance = 0;
	    int c = 0;
	    for(int i=0;i<q;i++){
	        int f,d;
	        cin>>f>>d;
	        distance += abs(f-c) + abs(d-f);
	        c = d;
	    }
	    cout<<distance<<endl;
	}
	return 0;
}
