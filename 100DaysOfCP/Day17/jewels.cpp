#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string j,s;
	    cin>>j>>s;
	    unordered_set <char> st;
	    for(int i=0;i<j.length();i++){
	        st.insert(j[i]);
	    }
	    int count = 0;
	    for(int i=0;i<s.length();i++){
	        if(st.find(s[i]) != st.end()){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
