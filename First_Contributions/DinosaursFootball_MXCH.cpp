#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int s = n-k;
		for(int i = 0;i<=k;i++){
			cout<<s<<" ";
			s++;
		}
		s = 1;
		while(s<n-k){
			cout<<s<<" ";
			s++;
		}
		cout<<endl;
	}
}