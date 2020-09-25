#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int D;
		cin>>D;
		string s;
		cin>>s;
		int present = 0;
		for(char c : s){
			if(c == 'P')
				present++;
		}
		double attendance = (double)present/D;
		if(attendance>=0.75){
			cout<<0<<endl;
			continue;
		}
		
		int requiredpresents = ceil((double)(3*D)/4);
		int reqproxies = requiredpresents - present, possproxies = 0;
		for(int i = 2;i<D-2;i++){
			if(s[i] == 'A' && (s[i-1] == 'P' || s[i-2] == 'P')&&(s[i+1] == 'P' || s[i+2] == 'P'))
				possproxies++;
		}
		if(possproxies>=reqproxies)
			cout<<reqproxies;
		else
			cout<<-1;
		cout<<endl;
	}
}